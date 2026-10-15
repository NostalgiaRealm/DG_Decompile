/*
 * FUN_100628a8 at 100628a8
 * undefined FUN_100628a8(void)
 * Address ranges: 100628a8-100629a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100628a8(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int local_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [96];
  
  FUN_1005c0c8(param_1);
  local_a8 = 0;
  if (param_4 != 0) {
    local_a8 = param_4 + -0x18;
  }
  if ((*(uint *)(param_1 + 0x7634) >> 2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x7630);
  }
  FUN_100720a0(local_a8,auStack_a0,uVar1);
  uStack_a4 = *(undefined4 *)(param_3 + 0x10);
  FUN_1007bd20(param_1,param_2,param_3,0,&local_a8,param_5,param_6,param_7,param_8);
  return;
}

