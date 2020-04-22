# Microwatt on Renode

This repo contains an example application and the commands to run in a simulated [Microwatt](https://github.com/antonblanchard/microwatt) processor on Antmicro's [Renode](https://renode.io/).

This requires Renode to be built from master branch.

Building Renode from master branch:

First install Mono for your platform as described [here](https://github.com/renode/renode/blob/master/README.rst#installing-dependencies).

```sh
git clone https://github.com/renode/renode
./build -s
sudo ln -s renode /usr/local/bin/renode
```

To build the sample binary:

```sh
make
```

To run on Renode:

```sh
make renode
```

