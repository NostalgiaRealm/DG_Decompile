/*
 * FUN_100905dd at 100905dd
 * undefined4 __thiscall FUN_100905dd(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 100905dd-10090693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100905dd(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  undefined2 extraout_DX;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_2 != param_3) {
    uVar4 = 0x8876086c;
    puVar2 = FUN_100035d8(this,param_1);
    uVar3 = FUN_100020ae(param_2);
    uVar3 = FUN_1000285a(*(byte **)(puVar2 + 0x130),uVar3);
    cVar1 = FUN_100027cb(param_2);
    if ((((cVar1 != '\0') || ((char)uVar3 != '\0')) && ((char)extraout_DX != '\0')) &&
       (uVar4 = 0x8876086a, (char)((ushort)extraout_DX >> 8) != '\0')) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

