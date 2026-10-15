/*
 * FUN_18001ac58 at 18001ac58
 * undefined8 __fastcall FUN_18001ac58(longlong * param_1, uint * param_2)
 * Address ranges: 18001ac58-18001ad46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001ac58(longlong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar4 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)
          (((param_2[9] << 6 | *param_2 & 3) << 2 | param_2[10] << 0x10 |
            -(uint)(param_2[8] != 0) & 0x80 | -(uint)(param_2[7] != 0) & 0x40 |
            -(uint)(param_2[6] != 0) & 0x20 | -(uint)(param_2[2] != 0) & 0x10 | param_2[1] & 3) ^
          param_2[5]) | ((ulonglong)param_2[4] ^ (longlong)(int)param_2[3]) << 0x20;
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar6 = uVar1;
    do {
      uVar4 = uVar6 + uVar5 >> 1;
      uVar2 = *(ulonglong *)(*param_1 + (ulonglong)uVar4 * 0x40);
      uVar3 = uVar4;
      if (uVar2 <= uVar7) {
        if (uVar7 <= uVar2) break;
        uVar5 = uVar4 + 1;
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar5);
    if ((uVar4 != uVar1) && (*(ulonglong *)((ulonglong)uVar4 * 0x40 + *param_1) == uVar7))
    goto LAB_18001ad30;
  }
  FUN_18001ae60(param_1,uVar4,uVar7,(undefined8 *)param_2);
LAB_18001ad30:
  return *(undefined8 *)((ulonglong)uVar4 * 0x40 + 0x38 + *param_1);
}

