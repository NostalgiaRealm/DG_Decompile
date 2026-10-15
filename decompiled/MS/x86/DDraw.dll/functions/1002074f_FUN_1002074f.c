/*
 * FUN_1002074f at 1002074f
 * undefined __thiscall FUN_1002074f(void * this, int param_1, int param_2, undefined4 param_3)
 * Address ranges: 1002074f-100208af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002074f(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x2c;
  *(uint *)((int)this + 0xce40) = (uint)(byte)(&DAT_1006940c)[iVar2];
  *(uint *)((int)this + 0xce44) = (uint)(byte)(&DAT_1006940e)[iVar2];
  *(uint *)((int)this + 0xce48) = (uint)(byte)(&DAT_10069410)[iVar2];
  *(uint *)((int)this + 0xce4c) = (uint)(byte)(&DAT_10069412)[iVar2];
  *(uint *)((int)this + 0xce50) = (uint)(byte)(&DAT_1006940d)[iVar2];
  *(uint *)((int)this + 0xce54) = (uint)(byte)(&DAT_1006940f)[iVar2];
  *(uint *)((int)this + 0xce58) = (uint)(byte)(&DAT_10069411)[iVar2];
  *(uint *)((int)this + 0xce5c) = (uint)(byte)(&DAT_10069413)[iVar2];
  *(uint *)((int)this + 0xce60) = 8 - (uint)(byte)(&DAT_1006940c)[iVar2];
  *(uint *)((int)this + 0xce64) = 8 - (uint)(byte)(&DAT_1006940e)[iVar2];
  *(uint *)((int)this + 0xce68) = 8 - (uint)(byte)(&DAT_10069410)[iVar2];
  *(uint *)((int)this + 0xce6c) = 8 - (uint)(byte)(&DAT_10069412)[iVar2];
  *(undefined4 *)((int)this + 0xce70) = *(undefined4 *)(&DAT_10069414 + iVar2);
  *(uint *)((int)this + 0xced0) = (uint)(byte)(&DAT_10069418)[iVar2];
  *(uint *)((int)this + 0xced4) = (uint)(byte)(&DAT_10069419)[iVar2];
  *(uint *)((int)this + 0xced8) = (uint)(byte)(&DAT_1006941a)[iVar2];
  *(uint *)((int)this + 0xcedc) = (uint)(byte)(&DAT_1006941b)[iVar2];
  if (param_2 != 0) {
    *(undefined4 *)((int)this + 0xcebc) = param_3;
    *(undefined4 *)((int)this + 0xcec0) = 0x3d000000;
    if ((param_2 == 0x17) || (param_2 == 0x18)) {
      *(undefined4 *)((int)this + 0xcec4) = 0x447fc000;
      uVar1 = 0x3ff;
      *(undefined4 *)((int)this + 0xcedc) = 3;
    }
    else {
      if ((param_2 != 9) && (param_2 != 0xb)) {
        *(undefined4 *)((int)this + 0xcec4) = 0x437f0000;
        *(undefined4 *)((int)this + 0xcec8) = 0xff;
        return;
      }
      uVar1 = 0xffff;
      *(undefined4 *)((int)this + 0xcec4) = 0x477fff00;
      *(undefined4 *)((int)this + 0xcedc) = 0xffff;
    }
    *(undefined4 *)((int)this + 0xced8) = uVar1;
    *(undefined4 *)((int)this + 0xced4) = uVar1;
    *(undefined4 *)((int)this + 0xced0) = uVar1;
    *(undefined4 *)((int)this + 0xcec8) = uVar1;
  }
  return;
}

