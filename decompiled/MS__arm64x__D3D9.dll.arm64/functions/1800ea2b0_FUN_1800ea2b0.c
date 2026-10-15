/*
 * FUN_1800ea2b0 at 1800ea2b0
 * undefined FUN_1800ea2b0(void)
 * Address ranges: 1800ea2b0-1800ea3a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea2b0(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    do {
      piVar2 = (int *)(param_3 + uVar5 * 0x18);
      lVar3 = param_1 + uVar5 * 0x18;
      if ((((*(int *)(lVar3 + 0x520) != *piVar2) || (*(int *)(lVar3 + 0x524) != piVar2[1])) ||
          (*(int *)(lVar3 + 0x528) != piVar2[2])) ||
         (((*(int *)(lVar3 + 0x52c) != piVar2[3] || (*(int *)(lVar3 + 0x530) != piVar2[4])) ||
          (*(int *)(lVar3 + 0x534) != piVar2[5])))) {
        uVar7 = *(undefined8 *)piVar2;
        puVar4 = (undefined8 *)(param_1 + 0x520 + uVar5 * 0x18);
        iVar6 = (int)uVar5 + 1;
        puVar4[1] = *(undefined8 *)(piVar2 + 2);
        *puVar4 = uVar7;
        puVar4[2] = *(undefined8 *)(piVar2 + 4);
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < param_2);
    if (iVar6 != 0) {
      FUN_1800e80d8(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa8))
                (*(longlong **)(param_1 + 0x688),iVar6,param_3);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

