// You are given the schedule of N meetings with their start time Start[i] and end time End[i].
//  But you have only 1 meeting room. So, you need to tell the meeting numbers you can 
//  organize in the given room, such that the number of meetings organized is maximum.

void maxMeetings(int s[], int f[], int n)
{
    pair<int, int> a[n + 1];
    int i;
    for (i = 0; i < n; i++) {
        a[i].first = f[i];
        a[i].second = i;
    }
    // Sorting of meeting according to their finish time.
    sort(a, a + n);
 
    // time_limit to check whether new
    // meeting can be conducted or not.
    int time_limit = a[0].first;
 
    // Vector for storing selected meeting.
    vector<int> m;
 
    // Initially select first meeting.
    m.push_back(a[0].second + 1);
 
    // Check for all meeting whether it
    // can be selected or not.
    for (i = 1; i < n; i++) {
        if (s[a[i].second] >= time_limit) {
            // Push selected meeting to vector
            m.push_back(a[i].second + 1);
 
            // update time limit
            time_limit = a[i].first;
        }
    }
 
    // Print final selected meetings.
    for (int i = 0; i < m.size(); i++) {
        cout << m[i] << " ";
    }
}
 
// Driver code
int main()
{
    // Starting time
    int s[] = { 1, 3, 0, 5, 8, 5 };
 
    // Finish time
    int f[] = { 2, 4, 6, 7, 9, 9 };
 
    // Number of meetings.
    int n = sizeof(s) / sizeof(s[0]);
 
    // Function call
    maxMeetings(s, f, n);
 
    return 0;
}