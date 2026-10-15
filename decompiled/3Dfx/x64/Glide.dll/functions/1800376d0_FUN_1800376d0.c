/*
 * FUN_1800376d0 at 1800376d0
 * undefined8 * __fastcall FUN_1800376d0(undefined8 param_1, undefined8 * param_2, longlong param_3, uint param_4)
 * Address ranges: 1800376d0-180037917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800376d0(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  uVar4 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_4 != 0) {
    do {
      lVar5 = uVar4 * 0x180;
      if (*(float *)(param_3 + 0x120 + lVar5) == *(float *)(param_3 + 0x124 + lVar5)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x400000;
      }
      iVar1 = *(int *)(param_3 + 0x118 + lVar5);
      *(uint *)((longlong)param_2 + uVar4 * 4) =
           ((((((((*(int *)(param_3 + 0x138 + lVar5) << 2 | *(uint *)(param_3 + 0x134 + lVar5)) << 2
                 | *(uint *)(param_3 + 0x148 + lVar5) & 3) << 2 | *(uint *)(param_3 + 0x140 + lVar5)
                ) * 2 | *(uint *)(param_3 + 0x13c + lVar5)) << 2 |
              *(uint *)(param_3 + 0x144 + lVar5)) << 4 | *(uint *)(param_3 + 0x114 + lVar5)) << 4 |
            *(uint *)(param_3 + 0x104 + lVar5)) << 5 | *(uint *)(param_3 + 0x110 + lVar5)) << 5 |
           *(uint *)(param_3 + 0x100 + lVar5) | uVar3;
      *(uint *)((longlong)param_2 + uVar4 * 4 + 0xc) =
           -(uint)(iVar1 != 0) & 0x40 | -(uint)(*(int *)(param_3 + 0x108 + lVar5) != 0) & 0x20 |
           (uint)((byte)(&DAT_180062bb8)[*(uint *)(param_3 + 0x130 + lVar5)] >> 1);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < param_4);
  }
  uVar3 = *(uint *)(param_3 + 0x1c);
  uVar2 = *(uint *)(param_3 + 0x8c);
  *(uint *)(param_2 + 3) =
       (((((((((*(int *)(param_3 + 0xc4) << 2 | *(uint *)(param_3 + 0xd4)) << 2 |
              *(uint *)(param_3 + 0xd8)) << 2 | *(uint *)(param_3 + 200)) << 3 |
            *(uint *)(param_3 + 0xcc)) << 3 | *(uint *)(param_3 + 0x78)) << 6 |
          *(uint *)(param_3 + 0xe0)) << 4 | *(uint *)(param_3 + 0xe4)) << 2 |
        *(uint *)(param_3 + 0xe8)) << 2 | *(uint *)(param_3 + 0xf8)) << 2 |
       -(uint)(*(int *)(param_3 + 0x4c) != 0) & 0x200000 |
       -(uint)(*(int *)(param_3 + 0xf0) != 0) & 0x8000 | *(uint *)(param_3 + 0xec);
  *(uint *)((longlong)param_2 + 0x1c) =
       (((((uVar3 & 0xf | param_4 << 0xb) << 4 | uVar3 & 0xf00 | *(uint *)(param_3 + 0x24)) << 4 |
         *(uint *)(param_3 + 0x74)) << 4 | uVar2 & 3) << 6 | uVar2 & 0x300) * 2 |
       -(uint)(*(int *)(param_3 + 0x28) != 0) & 0x40000 |
       -(uint)(*(int *)(param_3 + 0xa0) != 0) & 0x40 | -(uint)(*(int *)(param_3 + 0xd0) != 0) & 0x20
       | *(uint *)(param_3 + 0xc0);
  return param_2;
}

