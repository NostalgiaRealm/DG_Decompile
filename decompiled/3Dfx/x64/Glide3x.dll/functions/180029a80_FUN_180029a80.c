/*
 * FUN_180029a80 at 180029a80
 * undefined8 * __fastcall FUN_180029a80(undefined8 param_1, undefined8 * param_2, longlong param_3, uint param_4)
 * Address ranges: 180029a80-180029cee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180029a80(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_2 = 0;
  uVar3 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_4 != 0) {
    do {
      lVar4 = uVar3 * 0x1a0;
      if (*(float *)(param_3 + 0x120 + lVar4) == *(float *)(param_3 + 0x124 + lVar4)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x400000;
      }
      iVar1 = *(int *)(param_3 + 0x17c + lVar4);
      *(uint *)((longlong)param_2 + uVar3 * 4) =
           ((((((((*(int *)(param_3 + 0x138 + lVar4) << 2 | *(uint *)(param_3 + 0x134 + lVar4)) << 2
                 | *(uint *)(param_3 + 0x148 + lVar4) & 3) << 2 | *(uint *)(param_3 + 0x140 + lVar4)
                ) * 2 | *(uint *)(param_3 + 0x13c + lVar4)) << 2 |
              *(uint *)(param_3 + 0x144 + lVar4)) << 4 | *(uint *)(param_3 + 0x114 + lVar4)) << 4 |
            *(uint *)(param_3 + 0x104 + lVar4)) << 5 | *(uint *)(param_3 + 0x110 + lVar4)) << 5 |
           *(uint *)(param_3 + 0x100 + lVar4) | uVar2;
      *(uint *)((longlong)param_2 + uVar3 * 4 + 0xc) =
           -(uint)(iVar1 != 0) & 0x80 | -(uint)(*(int *)(param_3 + 0x118 + lVar4) != 0) & 0x40 |
           -(uint)(*(int *)(param_3 + 0x108 + lVar4) != 0) & 0x20 |
           (uint)((byte)(&DAT_180063998)[*(uint *)(param_3 + 0x130 + lVar4)] >> 1);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_4);
  }
  iVar1 = *(int *)(param_3 + 0x634);
  uVar2 = *(uint *)(param_3 + 0x1c);
  *(uint *)(param_2 + 3) =
       (((((((((*(int *)(param_3 + 0xc4) << 2 | *(uint *)(param_3 + 0xd4)) << 2 |
              *(uint *)(param_3 + 0xd8)) << 2 | *(uint *)(param_3 + 200)) << 3 |
            *(uint *)(param_3 + 0xcc)) << 3 | *(uint *)(param_3 + 0x78)) << 6 |
          *(uint *)(param_3 + 0xe0)) << 4 | *(uint *)(param_3 + 0xe4)) << 2 |
        *(uint *)(param_3 + 0xe8)) << 2 | *(uint *)(param_3 + 0xf8)) << 2 |
       -(uint)(*(int *)(param_3 + 0x4c) != 0) & 0x200000 |
       -(uint)(*(int *)(param_3 + 0xf0) != 0) & 0x8000 | *(uint *)(param_3 + 0xec);
  *(uint *)((longlong)param_2 + 0x1c) =
       -(uint)(iVar1 != 0) & 0x8000000 | -(uint)(*(int *)(param_3 + 0x28) != 0) & 0x40000 |
       -(uint)(*(int *)(param_3 + 0xa0) != 0) & 0x40 | -(uint)(*(int *)(param_3 + 0xd0) != 0) & 0x20
       | (((((uVar2 & 0xf | param_4 << 0xb) << 4 | uVar2 & 0xf00 | *(uint *)(param_3 + 0x24)) << 4 |
           *(uint *)(param_3 + 0x74)) << 4 | *(uint *)(param_3 + 0x8c) & 3) << 6 |
         *(uint *)(param_3 + 0x8c) & 0x300) * 2 | *(uint *)(param_3 + 0xc0);
  return param_2;
}

