/*
 * FUN_18004d9a0 at 18004d9a0
 * undefined8 __fastcall FUN_18004d9a0(longlong * param_1, int * param_2)
 * Address ranges: 18004d9a0-18004daed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004d9a0(longlong *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar3 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = 0;
  uVar7 = (((((ulonglong)(*(byte *)(param_2 + 0x21) & 0xf) << 4 |
             (ulonglong)(*(byte *)(param_2 + 0x19) & 0xf)) << 4 |
            (ulonglong)(*(byte *)(param_2 + 0x11) & 0xf)) << 4 |
           (ulonglong)(*(byte *)(param_2 + 9) & 0xf)) << 5 | (ulonglong)(param_2[8] & 7)) << 0x1d |
          (ulonglong)
          ((param_2[3] & 0x1fU |
           ((((param_2[7] & 0x1fU) << 5 | param_2[6] & 0x1fU) << 3 | param_2[5] & 7U) << 5 |
           param_2[4] & 0x1fU) << 5) << 6) | (ulonglong)(-(uint)(param_2[0x1a] != 0) & 0x20) |
          (ulonglong)(-(uint)(param_2[0x12] != 0) & 0x10) |
          (ulonglong)(-(uint)(param_2[10] != 0) & 8) | (ulonglong)(-(uint)(param_2[2] != 0) & 4) |
          (ulonglong)(-(uint)(param_2[1] != 0) & 2) | (ulonglong)(*param_2 != 0);
  if (uVar1 != 0) {
    uVar4 = uVar1;
    do {
      uVar6 = uVar4 + uVar3 >> 1;
      uVar5 = (ulonglong)uVar6;
      uVar2 = *(ulonglong *)(*param_1 + uVar5 * 0x118);
      if (uVar2 <= uVar7) {
        if (uVar7 <= uVar2) break;
        uVar3 = uVar6 + 1;
        uVar5 = (ulonglong)uVar3;
        uVar6 = uVar4;
      }
      uVar4 = uVar6;
    } while (uVar4 != uVar3);
    if (((uint)uVar5 != uVar1) && (*(ulonglong *)(uVar5 * 0x118 + *param_1) == uVar7))
    goto LAB_18004dad1;
  }
  FUN_18004daf0(param_1,(uint)uVar5,uVar7,(undefined8 *)param_2);
LAB_18004dad1:
  return *(undefined8 *)(uVar5 * 0x118 + 0x110 + *param_1);
}

