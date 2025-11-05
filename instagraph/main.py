N, M = map(int, input().split())
    
follows = [0]*N
followed_by = [0]*N

for i in range(M):
    u, v = map(int, input().split())
    u -= 1
    v -= 1

    # u_follows = f"{follows[u]:0>{N}b}"
    # u_follows = u_follows[:v] + "1" + u_follows[v + 1:]
    # follows[u] = int(u_follows, 2)
    follows[u] |= (1 << v)

    # v_followed_by = f"{followed_by[v]:0>{N}b}"
    # v_followed_by = v_followed_by[:u] + "1" + v_followed_by[u + 1:]
    # followed_by[v] = int(v_followed_by, 2)
    followed_by[v] |= (1 << u)

def cc(k):
    return (followed_by[k] & (~follows[k])).bit_count() 
    
highest = (0, 0)
for i in range(N):
    cc_score = cc(i)
    if cc_score > highest[1]:
        highest = (i, cc_score)
celeb, score = highest
print(f"{celeb + 1} {score:.0f}")