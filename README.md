# How to step into Reason without pains

## Install

Reason comes by default in [BuckleScript](https://bucklescript.github.io/), a compiler that turns Reason code into JavaScript code.

**Prerequisite**: either NPM (comes with [node](https://nodejs.org/en/)) or [Yarn](https://yarnpkg.com/en/).

To install BuckleScript & Reason globally:

```sh
yarn global add bs-platform
```

(or `npm install -g bs-platform` for npm).

## Recommaned IDE

Highly recommand `vscode` with `reason-vscode`.

They are my favorite productive tools.

## Basic Reason Template

Hello! This project allows you to quickly get started with Reason and BuckleScript. If you wanted a more sophisticated version, try the `react` template (`bsb -theme react -init .`).

### Install all dependence

```bash
# for yarn
yarn install

# for npm
npm install
```

### Build

```bash
# for yarn
yarn build

# for npm
npm run build
```

### Build + Watch

```bash
# for yarn
yarn start

# for npm
npm run start
```
