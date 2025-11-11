##include <queue>
using namespace std;
#include <vector>;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
vector<vector<bool>> mark(n , vector<bool>(m, false));
vector<vector<int>> solution(vector<vector<int>> bubbles)
{
    int n = bubbles.size();
    int m = bubbles[0].size();

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(bubbles[i][j] == 0) continue;
            int color = bubbles[i][j];
            int same = 0;
            for(int d = 0; d < 4; ++d)
            {
                int ni = i + dx[d], nj = j + dy[d];
                if(ni >= 0 && ni < n && nj >= 0 && nj < m && bubbles[ni][nj] == color)
                same++;
                
            }
            if(same >= 2)mark[i][j] = true;
        }
    }


    vector<vector<int>> toexplode (n <vector<bool>(m, false));
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(mark[i][j] && !toexplode[i][j])
            {
                int color = bubbles[i][j];
                queue<pair<int>, <int>> q;
                q.push({i, j});
                toexplode[i][j] = true;
                while(!q.empty())
                {
                    auto[x, y] = q.front();
                    q.pop();

                    for(int d = 0; d < 4; ++d)
                    {
                        int nx = x + dx[d], ny = y + dy[d];
                        if(nx >= 0; nx < n && ny >= 0 && ny < m && bubbles[nx][ny] = true)
                        {
                            toexplode[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }

                }
            }

        }
    }

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; j++)
            if(toexplode[i][j]) bubbles[i][j] = 0;

    for(int j = 0; j < m; ++j)
    {
        int write = n-1;
        for(int i = n-1;  i >= 0; --i)
        {
            if(bubbles[i][j] != 0 )
            {
                bubbles[write][j] = bubbles[i][j];
                if(write != i) bubbles[i][j] = 0;
                write--;
            }
        }

        for(int i = write; i> =0; --i)
            bubbles[i][j] = 0;
    }
    return bubbles;
}
