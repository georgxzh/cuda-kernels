# cuda-kernels

Learning GPU kernel programming from scratch, aimed at LLM inference
engineering. Each folder is one kernel/topic: a short lesson, the code, and
a correctness + benchmark harness.

Reading guide: https://github.com/wafer-ai/gpu-perf-engineering-resources

## Environment

- Written on a laptop with no NVIDIA GPU. Plain C practice (Phase 0) runs
  locally under WSL Ubuntu (gcc). No local CUDA execution.
- CUDA kernels run on Google Colab's free **T4 GPU**: compute capability
  7.5, compile with `-arch=sm_75`, peak memory bandwidth ≈ 320 GB/s, FP16
  tensor cores only (no BF16/FP8 tensor cores, no TMA/WGMMA).

## Progress

See [PROGRESS.md](PROGRESS.md) for current status and [CLAUDE.md](CLAUDE.md)
for the full curriculum and how these sessions are run.

## Results

| Kernel | Version | GPU | Time | Bandwidth / FLOPS | % of peak | vs baseline |
|---|---|---|---|---|---|---|
| — | — | — | — | — | — | — |

## Layout

- `00-c-basics/` — C fundamentals (local, WSL)
- `01-vector-add/` ... `20-*` — one folder per kernel/topic, in curriculum order
