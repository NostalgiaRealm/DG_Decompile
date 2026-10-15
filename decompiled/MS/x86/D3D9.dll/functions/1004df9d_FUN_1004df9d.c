/*
 * FUN_1004df9d at 1004df9d
 * undefined4 * __fastcall FUN_1004df9d(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined1 param_7)
 * Address ranges: 1004df9d-1004e033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1004df9d(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined1 param_7)

{
  uint uVar1;
  void *this;
  undefined4 *puVar2;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined4 local_8;
  
  local_c = *(char *)(param_5 + 0x443) != '\0';
  local_8 = param_1;
  if (*(char *)(param_5 + 0x4a6c) == '\x03') {
    uVar1 = FUN_100683fe(param_5,param_2);
    local_c = (undefined1)uVar1;
  }
  local_10 = param_6;
  local_b = param_7;
  this = (void *)FUN_100cfd55(0xc0);
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_1004d919(this,param_4,&local_10);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[7] = param_5;
      puVar2[1] = local_8;
      puVar2[2] = param_2;
      if (*(char *)(param_5 + 0x4a6c) == '\x03') {
        FUN_10068424((int)(puVar2 + 6));
      }
      puVar2[0x28] = puVar2[1];
      puVar2[0x29] = puVar2[2];
    }
  }
  return puVar2;
}

