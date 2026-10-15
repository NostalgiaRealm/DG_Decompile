/*
 * FUN_180074870 at 180074870
 * int __fastcall FUN_180074870(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180074870-1800749ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180074870(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_1800ee08c(param_2,*(int *)(param_3 + 0x20));
  *(uint *)(param_3 + 0x530) = *(uint *)(param_3 + 0x520) >> 0xc & 0xf;
  FUN_1800fbea0((undefined1 *)(param_3 + 0x544),0,0x300);
  uVar4 = (ulonglong)(uint)(*(int *)(param_3 + 0x52c) << 2);
  uVar3 = FUN_1800747c4(uVar4,(uint)(0x400 / uVar4),*(uint *)(param_3 + 0x530),
                        (undefined8 *)
                        (param_3 + 0x544 + (ulonglong)(*(uint *)(param_3 + 0x530) * 6 - 6) * 0x10));
  *(uint *)(param_3 + 0x538) = uVar3;
  *(undefined4 *)(param_3 + 0x534) = 0;
  if (uVar3 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(param_3 + 0x54c +
                       (ulonglong)((*(int *)(param_3 + 0x530) + -1) * 6 + uVar6) * 0x10);
      if (uVar5 < uVar1) {
        *(uint *)(param_3 + 0x534) = uVar1;
        uVar5 = uVar1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  uVar4 = (ulonglong)((uint)*(ulonglong *)(param_3 + 0x520) & 0x800);
  *(bool *)(param_3 + 0x53d) = (*(ulonglong *)(param_3 + 0x520) & 0x800) != 0;
  if ((uVar4 != 0) && (uVar3 = 1, 1 < *(uint *)(param_3 + 0x530))) {
    do {
      FUN_1800747c4(uVar4,*(uint *)(param_3 + 0x534),uVar3,
                    (undefined8 *)
                    ((undefined1 *)(param_3 + 0x544) + (ulonglong)(uVar3 * 6 - 6) * 0x10));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x530));
  }
  FUN_1800ee2d0(*(int *)(param_3 + 0x20),param_2,0);
  return iVar2;
}

