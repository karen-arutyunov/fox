# libfox - A C++ library

The `libfox` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libfox` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libfox ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libfox%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libfox.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
