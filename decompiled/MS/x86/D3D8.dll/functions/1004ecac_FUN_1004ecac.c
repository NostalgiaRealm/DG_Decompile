/*
 * FUN_1004ecac at 1004ecac
 * undefined4 __stdcall FUN_1004ecac(uint param_1, undefined1 * param_2, int param_3, int param_4, uint param_5, int * param_6, undefined4 * param_7, undefined4 param_8, char param_9, undefined1 param_10, uint param_11, uint param_12)
 * Address ranges: 1004ecac-1004ee47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1004ecac(uint param_1,undefined1 *param_2,int param_3,int param_4,uint param_5,int *param_6
                 ,undefined4 *param_7,undefined4 param_8,char param_9,undefined1 param_10,
                 uint param_11,uint param_12)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  uint local_310 [12];
  undefined1 *local_2e0;
  undefined2 local_2dc;
  uint local_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined2 uStack_2c4;
  char cStack_2c2;
  undefined1 local_270 [64];
  undefined1 local_230;
  undefined1 local_22f;
  undefined1 local_22e;
  undefined1 *local_22c;
  void *local_28;
  undefined4 local_23;
  undefined4 uStack_1f;
  undefined4 local_1b;
  undefined1 local_17;
  undefined1 uStack_16;
  undefined2 local_15;
  undefined2 uStack_13;
  char local_11;
  
  FUN_100ada8e((int *)local_310,0,0x2e0);
  local_310[0] = param_5;
  local_2e0 = local_270;
  local_2dc = 0x40;
  FUN_10049286((int)local_310);
  local_2d8 = (uint)CONCAT11(param_2[0x125],param_2[0x126]);
  local_23 = 0;
  uStack_1f = 0;
  local_1b = 0;
  local_17 = 0;
  uStack_16 = 0;
  local_15 = 0;
  uStack_13 = 0;
  local_11 = 0;
  FUN_100497e0((byte *)&local_23,param_11,param_12);
  local_23 = CONCAT13(param_2[1],CONCAT12(*param_2,(undefined2)local_23));
  uStack_1f = CONCAT13(param_2[0x2c],
                       CONCAT12(param_2[0x2b],CONCAT11(param_2[0x2a],(undefined1)uStack_1f)));
  uStack_2cc = *(undefined4 *)(param_2 + 0x2d);
  local_17 = param_2[0x31];
  local_15 = 0xff00;
  uStack_13 = 0xffff;
  cStack_2c2 = (param_2[0x40] != '\0') * '\x02' + -1;
  local_2d4 = local_23;
  uStack_2d0 = uStack_1f;
  uStack_2c8 = CONCAT22(0xff00,CONCAT11(uStack_16,local_17));
  uStack_2c4 = 0xffff;
  local_22c = param_2;
  local_230 = 0;
  if ((param_9 != '\0') || (local_22f = 0, param_3 == 0 && param_4 == 0)) {
    local_22f = 1;
  }
  local_22e = param_10;
  local_1b = uStack_2cc;
  local_11 = cStack_2c2;
  uVar2 = FUN_1004982e(param_6,(int)local_310);
  if (((char)uVar2 != '\0') &&
     (uVar2 = FUN_1004eaa0(local_28,param_6,local_310,extraout_ECX,extraout_ECX,param_1,param_11,
                           param_12), (char)uVar2 != '\0')) {
    if (*(int *)((int)local_28 + 8) != 0) {
      pbVar1 = (byte *)(((uint)(param_6[1] - *param_6) >> 1) + *param_6);
      *pbVar1 = *pbVar1 ^ 0x2a;
    }
    FUN_100a15a6(param_6);
    uVar3 = FUN_1004a68b((int)local_310,param_7);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

