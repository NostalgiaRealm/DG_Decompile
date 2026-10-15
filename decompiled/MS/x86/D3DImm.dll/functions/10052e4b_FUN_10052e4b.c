/*
 * FUN_10052e4b at 10052e4b
 * bool __stdcall FUN_10052e4b(int * param_1, uint param_2, void * param_3, int * param_4, undefined4 * param_5, uint param_6)
 * Address ranges: 10052e4b-10052f07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10052e4b(int *param_1,uint param_2,void *param_3,int *param_4,undefined4 *param_5,
                 uint param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined1 local_64 [60];
  int local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  void *local_8;
  
  cVar1 = false;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_28,local_c);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,local_64);
    iVar2 = *(int *)(iVar2 + 0x20);
    uVar4 = extraout_ECX;
    if (((local_28[0] == 4) && (iVar2 != 0x2d)) && (iVar2 != 0x2c)) {
      local_14 = 0;
      local_10 = 0;
      iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_14,0);
      uVar4 = extraout_ECX_00;
      if (-1 < iVar3) {
        cVar1 = FUN_10055e7e(*(void **)((int)local_8 + 0x8e4));
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x30))(param_1,param_2,param_4,param_5,param_6,0);
        }
        (**(code **)(*param_1 + 0x24))(param_1,param_2,0);
        uVar4 = extraout_ECX_01;
      }
      if (cVar1 != '\0') {
        return (bool)cVar1;
      }
    }
    cVar1 = FUN_10052dfd(local_8,param_1,param_2,param_3,param_4,param_5,param_6,uVar4,uVar4,iVar2);
  }
  return (bool)cVar1;
}

