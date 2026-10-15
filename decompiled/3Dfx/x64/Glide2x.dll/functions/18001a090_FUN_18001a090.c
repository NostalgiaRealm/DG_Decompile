/*
 * FUN_18001a090 at 18001a090
 * undefined __fastcall FUN_18001a090(longlong param_1, char param_2)
 * Address ranges: 18001a090-18001a1ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a090(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  
  if ((*(char *)(param_1 + 0x3171) == '\0') && (param_2 == '\0')) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x2984);
  if (iVar4 == 0) {
    lVar5 = 0x3654;
    lVar2 = 0x3650;
    lVar1 = 0x365c;
    lVar6 = 0x3658;
  }
  else if (iVar4 == 1) {
    lVar5 = 0x37c4;
    lVar2 = 0x37c0;
    lVar1 = 0x37cc;
    lVar6 = 0x37c8;
  }
  else {
    if (iVar4 != 2) goto LAB_18001a1bd;
    lVar5 = 0x3934;
    lVar2 = 0x3930;
    lVar1 = 0x393c;
    lVar6 = 0x3938;
  }
  if (*(char *)(param_1 + 0x32d9) == '\0') {
    local_30 = *(uint *)(lVar6 + param_1);
    local_2c = *(uint *)(lVar1 + param_1);
    local_38 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x29a8);
    iVar7 = *(int *)(param_1 + 0x29b0);
    if (*(int *)(param_1 + 0x2bf8) == 1) {
      iVar3 = *(int *)(lVar5 + param_1) - iVar7;
      iVar7 = *(int *)(lVar5 + param_1) - iVar4;
      iVar4 = iVar3;
    }
    local_38 = CONCAT44((uint)(*(int *)(lVar1 + param_1) * iVar4) / *(uint *)(lVar5 + param_1),
                        (uint)(*(int *)(param_1 + 0x29a4) * *(int *)(lVar6 + param_1)) /
                        *(uint *)(lVar2 + param_1));
    local_30 = (uint)(*(int *)(param_1 + 0x29ac) * *(int *)(lVar6 + param_1)) /
               *(uint *)(lVar2 + param_1);
    local_2c = (uint)(*(int *)(lVar1 + param_1) * iVar7) / *(uint *)(lVar5 + param_1);
  }
  FUN_1800487c0(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),1,(longlong)&local_38);
LAB_18001a1bd:
  *(undefined1 *)(param_1 + 0x3171) = 0;
  return;
}

