/*
 * FUN_180016f80 at 180016f80
 * uint __cdecl FUN_180016f80(longlong * param_1, int param_2)
 * Address ranges: 180016f80-18001709f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180016f80(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else if (param_2 == 1) {
    uVar5 = 1;
  }
  else if (param_2 == 2) {
    uVar5 = 2;
  }
  else {
    uVar5 = 0xffffffff;
    cVar8 = '\0';
    if (param_2 != 6) {
      if (param_2 != 7) {
        return 0xffffffff;
      }
      cVar8 = '\x01';
    }
    lVar7 = param_1[1];
    bVar3 = cVar8 != '\0';
    lVar1 = 0x2a34;
    if (bVar3) {
      lVar1 = 0x2a48;
    }
    lVar2 = 0x2a40;
    if (bVar3) {
      lVar2 = 0x2a54;
    }
    lVar4 = 0x2a3c;
    if (bVar3) {
      lVar4 = 0x2a50;
    }
    if (*(int *)(lVar2 + lVar7) != *(int *)(lVar4 + lVar7)) {
      lVar2 = 0x2a3c;
      if (cVar8 != '\0') {
        lVar2 = 0x2a50;
      }
      uVar6 = 3;
      do {
        lVar4 = (**(code **)(*param_1 + 0x58))(param_1,uVar6);
        if (((*(int *)(lVar4 + 0x18) == *(int *)(lVar7 + lVar2)) &&
            (*(int *)(lVar4 + 0x1c) == *(int *)(lVar7 + lVar1 + 0xc))) &&
           (cVar8 == *(char *)(lVar4 + 0x48))) {
          return uVar6;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 7);
    }
  }
  return uVar5;
}

