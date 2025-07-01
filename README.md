# README
- 下に日本語版があります
- Japanese follows English

## English Part (英語版)

### Overview

- This repository contains my project for **Rank 00** of the core curriculum at [42Tokyo](https://42tokyo.jp/).
- The project is done in **November 2024**.
- The specific project assignments are confidential, but students are permitted to publish their own code.
    - **Note to 42 students:** This code may have been modified after its official evaluation. I cannot guarantee it will pass reviews.
- **Libft** is a project where students re-implement a set of standard C library functions to create a personal static library.
- This library will be used in many subsequent projects from Rank 01 onwards.

### Environment

- **OS:** Ubuntu 22.04 LTS (Jammy Jellyfish)
- **Compiler:** `cc` (typically a symlink to `gcc`)
- **Build Tool:** `make`

### Usage

1.  **Clone the repository:**
    ```sh
    git clone [repository_url]
    ```

2.  **Navigate to the project directory:**
    ```sh
    cd [cloned_path]
    ```

3.  **Compile the library:**
    ```sh
    make
    ```
    This command creates the static library file, `libft.a`.

4.  **Using the library:**
    To link the `libft.a` library with your program (e.g., `main.c`), use the following command:
    ```sh
    cc main.c -L. -lft
    ```
    - `-L.` tells the compiler to search for libraries in the current directory.
    - `-lft` tells the linker to link the `libft` library.

## 日本語版 (Japanese Part)

### 概要

- このリポジトリは[42Tokyo](https://42tokyo.jp/) の基礎課程 (**Rank 00**) のプロジェクトです。
- このプロジェクトは**2024.11**に完了しています。
- 課題の詳細は公開が禁止されていますが、学生が自身で書いたコードを公開することは許可されています。
    - **42の学生へ:** このコードは評価時から変更されている可能性があります。そのため、このコードを参考にしたとき、レビューに合格することは保証しません。
- **Libft** は、C言語の標準ライブラリ関数の一部を再実装し、個人用の静的ライブラリを作成するプロジェクトです。
- このLibftライブラリは、Rank01以降のプロジェクトで使用されます。

### 環境

- **OS:** Ubuntu 22.04 LTS (Jammy Jellyfish)
- **コンパイラ:** `cc` (実際には`gcc`へのシンボリックリンクであることが多い)
- **ビルドツール:** `make`

### 使い方

1.  **リポジトリをクローンする:**
    ```sh
    git clone [repository_url]
    ```

2.  **プロジェクトディレクトリに移動する:**
    ```sh
    cd [cloned_path]
    ```

3.  **ライブラリをコンパイルする:**
    ```sh
    make
    ```
    このコマンドで `libft.a` が生成されます

4.  **ライブラリを使用する:**
    参考: 作成した `libft.a` を自作のプログラム（例: `main.c`）とリンクする方法
    ```sh
    cc main.c -L. -lft
    ```
    - `-L.` は、現在のディレクトリでライブラリファイルを探す
    - `-lft` は、`libft` ライブラリをリンク
