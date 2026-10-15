/*
 * FUN_180098258 at 180098258
 * undefined8 __fastcall FUN_180098258(longlong * param_1, int * param_2)
 * Address ranges: 180098258-180098407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180098258(longlong *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = 0;
  uVar7 = (((((((ulonglong)
                (-(uint)(param_2[1] != 0) & 0x800 | -(uint)(*param_2 != 0) & 0x400 |
                *(byte *)(param_2 + 0x29) & 0xf) << 4 | (ulonglong)(*(byte *)(param_2 + 0x1f) & 0xf)
               ) << 4 | (ulonglong)(*(byte *)(param_2 + 0x15) & 0xf)) << 4 |
             (ulonglong)(*(byte *)(param_2 + 0xb) & 0xf)) << 4 | (ulonglong)(param_2[10] & 0xf)) <<
            3 | (ulonglong)(param_2[9] & 7)) << 5 | (ulonglong)(param_2[8] & 0x1f)) << 0x1c |
          (ulonglong)
          ((param_2[4] & 0x1fU |
           (((param_2[7] & 0x1fU) << 3 | param_2[6] & 7U) << 5 | param_2[5] & 0x1fU) << 5) << 10) |
          (ulonglong)(-(uint)(param_2[0x21] != 0) & 0x200) |
          (ulonglong)(-(uint)(param_2[0x20] != 0) & 0x100) |
          (ulonglong)(-(uint)(param_2[0x17] != 0) & 0x80) |
          (ulonglong)(-(uint)(param_2[0x16] != 0) & 0x40) |
          (ulonglong)(-(uint)(param_2[0xd] != 0) & 0x20) |
          (ulonglong)(-(uint)(param_2[0xc] != 0) & 0x10) | (ulonglong)(-(uint)(param_2[3] != 0) & 8)
          | (ulonglong)(-(uint)(param_2[2] != 0) & 4);
  if (uVar1 != 0) {
    uVar3 = 0;
    uVar4 = uVar1;
    do {
      uVar6 = uVar4 + uVar3 >> 1;
      uVar5 = (ulonglong)uVar6;
      uVar2 = *(ulonglong *)(*param_1 + uVar5 * 0x158);
      if (uVar2 <= uVar7) {
        if (uVar7 <= uVar2) break;
        uVar3 = uVar6 + 1;
        uVar5 = (ulonglong)uVar3;
        uVar6 = uVar4;
      }
      uVar4 = uVar6;
    } while (uVar4 != uVar3);
    if (((uint)uVar5 != uVar1) && (*(ulonglong *)(uVar5 * 0x158 + *param_1) == uVar7))
    goto LAB_1800983eb;
  }
  FUN_180098408(param_1,(uint)uVar5,uVar7,(undefined8 *)param_2);
LAB_1800983eb:
  return *(undefined8 *)(uVar5 * 0x158 + 0x150 + *param_1);
}

