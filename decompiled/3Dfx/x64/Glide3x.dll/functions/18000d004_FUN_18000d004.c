/*
 * FUN_18000d004 at 18000d004
 * undefined __fastcall FUN_18000d004(longlong param_1, char param_2)
 * Address ranges: 18000d004-18000d13a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d004(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_18;
  uint local_10;
  uint local_c;
  
  if ((*(char *)(param_1 + 0x32f1) != '\0') || (param_2 != '\0')) {
    uVar3 = FUN_180014854((longlong *)(param_1 + 0x3668),*(int *)(param_1 + 0x29fc));
    if (uVar3 != 0xffffffff) {
      lVar5 = (longlong)(int)uVar3 * 0x170;
      if (*(char *)(param_1 + 0x3459) == '\0') {
        local_10 = *(uint *)(lVar5 + 0x37d8 + param_1);
        local_c = *(uint *)(lVar5 + 0x37dc + param_1);
        local_18 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x2a28);
        iVar4 = *(int *)(param_1 + 0x2a20);
        if (*(int *)(param_1 + 0x2c98) == 1) {
          iVar1 = *(int *)(lVar5 + 0x37d4 + param_1);
          iVar4 = iVar1 - iVar6;
          iVar6 = iVar1 - *(int *)(param_1 + 0x2a20);
        }
        iVar1 = *(int *)(lVar5 + 0x37d8 + param_1);
        local_10 = *(uint *)(lVar5 + 0x37d0 + param_1);
        local_c = *(uint *)(lVar5 + 0x37d4 + param_1);
        iVar2 = *(int *)(lVar5 + 0x37dc + param_1);
        local_18 = CONCAT44((uint)(iVar2 * iVar4) / local_c,
                            (uint)(*(int *)(param_1 + 0x2a1c) * iVar1) / local_10);
        local_10 = (uint)(*(int *)(param_1 + 0x2a24) * iVar1) / local_10;
        local_c = (uint)(iVar2 * iVar6) / local_c;
      }
      FUN_18004adcc(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),1,(longlong)&local_18);
    }
    *(undefined1 *)(param_1 + 0x32f1) = 0;
  }
  return;
}

