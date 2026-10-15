/*
 * FUN_100547bd at 100547bd
 * bool __thiscall FUN_100547bd(void * this, int * param_1, void * param_2, int param_3, int param_4, undefined4 * param_5, char param_6, char param_7)
 * Address ranges: 100547bd-1005482a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_100547bd(void *this,int *param_1,void *param_2,int param_3,int param_4,undefined4 *param_5,
            char param_6,char param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int unaff_EBX;
  undefined1 local_20 [4];
  undefined1 local_1c [24];
  
  bVar2 = false;
  iVar3 = (**(code **)(*param_1 + 0x38))(param_1,local_1c,local_20);
  if (-1 < iVar3) {
    if (((unaff_EBX == 4) && (param_7 == '\0')) &&
       (cVar1 = FUN_10054620(this,param_1,param_3,param_4,param_5,param_6), cVar1 != '\0')) {
      return (bool)cVar1;
    }
    bVar2 = FUN_10054749(this,(uint)param_1,param_2,param_3,param_4,param_5);
  }
  return bVar2;
}

