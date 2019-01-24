import socket

seeders = [
    '193.200.241.196',
    '185.2.101.117',
    '193.200.241.151',
    '193.200.241.146', 
    '193.200.241.145',
	'91.205.173.246'
]

for seeder in seeders:
    try:
        ais = socket.getaddrinfo(seeder, 0)
    except socket.gaierror:
        ais = []
    
    # Prevent duplicates, need to update to check
    # for ports, can have multiple nodes on 1 ip.
    addrs = []
    for a in ais:
        addr = a[4][0]
        if addrs.count(addr) == 0:
            addrs.append(addr)
    
    print(seeder + ' = ' + str(len(addrs)))