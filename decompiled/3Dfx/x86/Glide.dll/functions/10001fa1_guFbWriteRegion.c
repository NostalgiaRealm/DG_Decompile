/*
 * guFbWriteRegion at 10001fa1
 * undefined __stdcall guFbWriteRegion(uint param_1, uint param_2, int param_3, uint param_4, undefined4 param_5, int param_6)
 * Address ranges: 10001fa1-10001fd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guFbWriteRegion,24
 */

/* __stdcall guFbWriteRegion,24 */

void guFbWriteRegion(uint param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
                    int param_6)

{
  undefined *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x1fa1  117  _guFbWriteRegion@24 */
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = DAT_1005978c;
  uVar2 = DAT_10059768;
  this = FUN_10012ab2();
  FUN_10013b62(this,iVar1,param_1,param_2,uVar2,param_3,param_4,param_6,param_5,uVar3,uVar4);
  return;
}

