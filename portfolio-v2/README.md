# portfolio-v2

守田 一喜 (@moritaoy) のポートフォリオサイト試作 第2弾。前回(ブランチ `ccr-b04c097b-dt5jpq` の `portfolio/`、青空 × ゲーム風の3案)とは方向性を変え、演出と情報量を増やした3パターン。

| パターン | ディレクトリ | コンセプト |
| --- | --- | --- |
| A. 空 SORA | `a-sora/` | WebGL(手書き GLSL)の雲海。スクロールで夜明け→昼→夕焼け→星空と一日が進む |
| B. SkyJudge Contest | `b-skyjudge/` | ポートフォリオ自体がコンテストサイト。各章が「問題」で、提出するとジャッジが走る |
| C. 黒魔術 GRIMOIRE | `c-grimoire/` | kuromajutsu 由来の魔導書。生成される魔法陣からサブエージェントを並列召喚 |

- どれも `index.html` 1 ファイルで完結(ビルド不要、ライブラリ不使用、外部依存は Google Fonts のみ)。ブラウザで直接開けます。
- 掲載内容は各ファイルの `<script>` 冒頭にある `PROFILE` オブジェクトで差し替えられます。
- `screenshots/` に PC / スマホ表示のキャプチャがあります。

## 掲載内容の出典

公開情報をもとにした下書きです。公開前に本人確認してください。

- 前回試作の `PROFILE`(採用サイトのインタビュー、CAGC2024 登壇資料、Qiita 記事がもと)
- GitHub @moritaoy の公開リポジトリ一覧と各 README(kuromajutsu、PJ-intern-JavaREPOAnalyzer など)

ジャッジの実行時間や召喚ログなどの演出用の数値は、事実と混ざらないよう演出であることを明記しています。
