# hypercore-C

hypercore-C is a C implementation of [hypercore](https://github.com/mafintosh/hypercore), a secure, distributed append-only log. Hypercore is built for sharing large datasets and real-time data streams as part of the [Dat project](https://datproject.org)

To learn more about how hypercore works on a technical level read the [Dat paper](https://github.com/datproject/docs/blob/master/papers/dat-paper.pdf).

``` sh
cmake -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_BUILD_TYPE=Debug .
make
```

## License

MIT
