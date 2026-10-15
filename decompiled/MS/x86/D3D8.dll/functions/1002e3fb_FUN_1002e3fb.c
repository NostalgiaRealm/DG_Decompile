/*
 * FUN_1002e3fb at 1002e3fb
 * undefined4 * __stdcall FUN_1002e3fb(undefined4 * param_1, int param_2, int param_3, uint param_4, undefined4 param_5, int param_6, undefined4 * param_7, int param_8)
 * Address ranges: 1002e3fb-1002e58a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1002e3fb(undefined4 *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,int param_6
            ,undefined4 *param_7,int param_8)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  LPVOID pvVar6;
  bool bVar7;
  LPVOID local_1c;
  int local_18;
  int local_c;
  
  iVar5 = param_3 * 0x1510;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1002d6f1(&local_1c,0x100);
  bVar7 = *(int *)(iVar5 + 0x524 + param_2) == 0x1002;
  if ((param_4 & 0x100) == 0) {
    uVar4 = 0x10040;
    if (0xafff < *(int *)(iVar5 + 0x520 + param_2)) {
      uVar4 = 0x10050;
    }
    cVar2 = FUN_1005cfde((void *)(local_c + 0x10),*(undefined4 *)(local_c + 0x24),param_4,param_5,
                         param_6,param_7,param_8,uVar4,uVar4,(int *)&local_1c,(undefined4 *)0x0,
                         uVar4,*(undefined1 *)(local_c + 0x29),bVar7);
    pvVar6 = local_1c;
    if (cVar2 != '\0') {
      piVar1 = *(int **)(iVar5 + 0x510 + param_2);
      (**(code **)(*piVar1 + 0x30))(piVar1,local_1c,local_18 - (int)local_1c,0,param_1);
    }
  }
  else {
    cVar2 = FUN_10055305(param_4,param_5,param_7,param_8,0x10050,(int *)&local_1c);
    pvVar6 = local_1c;
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(iVar5 + 0x510 + param_2),
       iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,local_1c,local_18 - (int)local_1c,0,param_1),
       -1 < iVar3)) {
      FUN_1002d6f1(&local_1c,0x100);
      cVar2 = FUN_10055548(param_4,param_5,param_7,*(undefined4 *)(local_c + 0x24),param_8,param_6,
                           local_c,0x20050,(int *)&local_1c,(undefined4 *)0x0,local_c,
                           *(undefined1 *)(local_c + 0x29),bVar7);
      if ((cVar2 == '\0') ||
         (piVar1 = *(int **)(iVar5 + 0x510 + param_2),
         iVar5 = (**(code **)(*piVar1 + 0x34))
                           (piVar1,local_1c,local_18 - (int)local_1c,0,param_1 + 1), iVar5 < 0)) {
        (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
        *param_1 = 0;
      }
      thunk_FUN_100ad48c(local_1c);
    }
  }
  thunk_FUN_100ad48c(pvVar6);
  return param_1;
}

