/*
 * FUN_10024932 at 10024932
 * char __fastcall FUN_10024932(int * param_1)
 * Address ranges: 10024932-1002499d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_10024932(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  cVar2 = '\0';
  iVar3 = (**(code **)(*param_1 + 0x14))();
  iVar4 = (**(code **)(*param_1 + 0x10))();
  if ((iVar3 != 0) && ((int *)(&DAT_100ba720)[iVar4 * 0x8a] != (int *)0x0)) {
    piVar5 = (int *)(**(code **)(*(int *)(&DAT_100ba720)[iVar4 * 0x8a] + 0x30))
                              (iVar3,0,0,4,2,2,0,0,0);
    if (piVar5 == (int *)0x0) {
      cVar2 = '\x01';
    }
    else {
      cVar1 = (**(code **)(*piVar5 + 0x14))();
      if (cVar1 != '\0') {
        cVar2 = (**(code **)(*piVar5 + 0x18))();
        cVar2 = (cVar2 != '\0') + '\x01';
      }
      (**(code **)(*piVar5 + 0x10))();
    }
  }
  return cVar2;
}

