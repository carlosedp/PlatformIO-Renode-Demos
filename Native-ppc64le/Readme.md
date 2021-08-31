# Microwatt on Renode

This repo contains an example application and the commands to run in a simulated [Microwatt](https://github.com/antonblanchard/microwatt) processor on Antmicro's [Renode](https://renode.io/). Microwatt is an open source ppc64le. This requires Renode version 1.10 or up.

To build the sample binary:

```sh
make
```

To run on Renode:

```sh
make renode
```

There is a [work in progress](https://github.com/platformio/platformio-core/issues/3474) to add support to native building for ppc64le on PlatformIO.
