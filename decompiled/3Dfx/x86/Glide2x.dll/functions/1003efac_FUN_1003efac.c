/*
 * FUN_1003efac at 1003efac
 * bool __stdcall FUN_1003efac(int * param_1, uint param_2, void * param_3, int * param_4, undefined4 * param_5, uint param_6, int param_7)
 * Address ranges: 1003efac-1003f07a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1003efac(int *param_1,uint param_2,void *param_3,int *param_4,undefined4 *param_5,
                 uint param_6,int param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  int unaff_EBX;
  undefined1 *this;
  undefined1 local_60 [12];
  undefined1 local_54 [8];
  undefined1 auStack_4c [72];
  
  this = local_54;
  cVar1 = false;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,this,local_60);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,auStack_4c);
    iVar2 = *(int *)(iVar2 + 0x20);
    uVar4 = extraout_ECX;
    if (((unaff_EBX == 4) && (iVar2 != 0x2d)) && (iVar2 != 0x2c)) {
      iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,&stack0xffffff90,0);
      uVar4 = extraout_ECX_00;
      if (-1 < iVar3) {
        cVar1 = FUN_10039910(*(void **)(this + 0x8e4));
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x30))(param_1,param_2,param_4,param_5,param_6,param_7);
        }
        (**(code **)(*param_1 + 0x24))(param_1,param_2,0);
        uVar4 = extraout_ECX_01;
      }
      if (cVar1 != '\0') {
        return (bool)cVar1;
      }
    }
    cVar1 = FUN_1003ef5c(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar4,iVar2);
  }
  return (bool)cVar1;
}

