/*
 * FUN_100084d0 at 100084d0
 * undefined FUN_100084d0(void)
 * Address ranges: 100084d0-1000859b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100084d0(int param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6)

{
  uint uVar1;
  bool bVar2;
  ulonglong local_110;
  int iStack_108;
  uint uStack_104;
  longlong lStack_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  lStack_100 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  bVar2 = *(int *)(param_3 + 4) != 0;
  if (bVar2) {
    param_4 = param_4 & 0xfffffff7;
  }
  uVar1 = *(uint *)(param_3 + 0xc);
  param_2 = param_2 + uVar1 * param_5;
  iStack_108 = 0;
  local_110 = (ulonglong)(param_2 + (uint)*(byte *)(param_3 + 0x17) * 4);
  uStack_f8 = 0x200000000;
  if (*(char *)(param_3 + 0x1c) != -1) {
    iStack_108 = param_2 + (uint)*(byte *)(param_3 + 0x1f) * 4;
    lStack_100 = (ulonglong)uVar1 << 0x20;
    uStack_f8._0_7_ =
         CONCAT16(*(undefined1 *)(param_3 + 0x20),(uint6)CONCAT14(2,(uint)*(byte *)(param_3 + 0x1d))
                 );
    uStack_f8 = (ulonglong)(uint7)uStack_f8;
  }
  _iStack_108 = CONCAT44(uVar1,iStack_108);
  uStack_f8 = CONCAT17(bVar2,(uint7)uStack_f8);
  lStack_e8 = (ulonglong)(param_1 + 0x1f0) << 0x20;
  local_f0 = (ulonglong)(CONCAT11((char)(param_4 >> 3),(char)(param_4 >> 1)) & 0xff01) &
             0xffffffffffff01ff;
  FUN_1000f710(param_1,&local_110,0,param_6);
  return;
}

