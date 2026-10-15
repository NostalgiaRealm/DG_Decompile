/*
 * FUN_180014854 at 180014854
 * uint __fastcall FUN_180014854(longlong * param_1, int param_2)
 * Address ranges: 180014854-18001493e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180014854(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0xffffffff;
  cVar3 = '\0';
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else if (param_2 == 1) {
    uVar4 = 1;
  }
  else if (param_2 == 2) {
    uVar4 = 2;
  }
  else {
    if (param_2 != 6) {
      if (param_2 != 7) {
        return 0xffffffff;
      }
      cVar3 = '\x01';
    }
    lVar1 = param_1[1];
    if (*(int *)(lVar1 + 0x2a40 + (ulonglong)(-(uint)(cVar3 != '\0') & 0x14)) !=
        *(int *)(lVar1 + (ulonglong)(-(uint)(cVar3 != '\0') & 0x14) + 0x2a3c)) {
      uVar5 = 3;
      do {
        lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar5);
        if (((*(int *)(lVar2 + 0x18) ==
              *(int *)((ulonglong)(-(uint)(cVar3 != '\0') & 0x14) + 0x2a3c + lVar1)) &&
            (*(int *)(lVar2 + 0x1c) ==
             *(int *)(lVar1 + 0x2a40 + (ulonglong)(-(uint)(cVar3 != '\0') & 0x14)))) &&
           (cVar3 == *(char *)(lVar2 + 0x48))) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 7);
    }
  }
  return uVar4;
}

