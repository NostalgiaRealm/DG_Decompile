/*
 * FUN_1007ac99 at 1007ac99
 * undefined4 * __thiscall FUN_1007ac99(void * this, void * param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, char param_7, undefined4 * param_8)
 * Address ranges: 1007ac99-1007ade7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1007ac99(void *this,void *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,undefined4 *param_8)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  char extraout_DL;
  
  *(undefined4 *)((int)this + 0x58e4) = 0;
  *(undefined4 *)((int)this + 0x58e8) = 0;
  puVar3 = (undefined4 *)((int)this + 0x58e0);
  if (this == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 **)((int)this + 0x58ec) = puVar3;
  FUN_100061b9(this,(int)param_1,param_2,param_3,param_4,param_5,param_6,0,param_8);
  *(undefined ***)((int)this + 0x58d0) = &PTR_LAB_100af4e0;
  *(undefined4 *)((int)this + 0x58d4) = 0;
  *(undefined4 *)((int)this + 0x58d8) = 0;
  *(undefined4 *)((int)this + 0x58dc) = 0;
  *(undefined4 *)((int)this + 0x58f4) = 0;
  *(undefined ***)this = &PTR_FUN_100b36c8;
  *(undefined4 *)((int)this + 0x58e0) = &PTR_FUN_100b3544;
  *(void **)((int)this + 0x58f0) = param_1;
  *(undefined4 *)((int)this + 0x58f8) = 0;
  *(undefined4 *)((int)this + 0x58fc) = 0;
  *(undefined4 *)((int)this + 0x5900) = 0;
  *(undefined4 *)((int)this + 0x5904) = 0;
  *(void **)((int)this + 0x5908) = this;
  *(undefined4 *)((int)this + 0x590c) = 0;
  *(undefined4 *)((int)this + 0x5910) = 0;
  *(undefined4 *)((int)this + 0x5914) = 0;
  *(undefined4 *)((int)this + 0x5918) = 0;
  *(undefined4 *)((int)this + 0x591c) = 0;
  *(undefined4 *)((int)this + 0x5920) = 0;
  *(undefined4 *)((int)this + 0x5924) = 0;
  *(undefined4 *)((int)this + 0x5928) = 0;
  *(void **)((int)this + 0x592c) = this;
  *(undefined4 *)((int)this + 0x5930) = 0;
  *(undefined4 *)((int)this + 0x5934) = 0;
  *(undefined4 *)((int)this + 0x5938) = 0;
  *(undefined4 *)((int)this + 0x593c) = 0;
  *(undefined4 *)((int)this + 0x5940) = 0;
  *(undefined4 *)((int)this + 0x5944) = 0;
  *(undefined4 *)((int)this + 0x5948) = 0;
  LOCK();
  *(int *)((int)param_1 + 0x74) = *(int *)((int)param_1 + 0x74) + 1;
  UNLOCK();
  *(undefined **)((int)this + 4) = &DAT_100b9838;
  *(undefined **)((int)this + 8) = &DAT_100b9da8;
  puVar4 = FUN_100031b7(param_1,param_3);
  *(undefined **)((int)this + 0x58f4) = puVar4;
  uVar1 = *(uint *)(puVar4 + 0x24);
  *(byte *)((int)this + 0x223) = (byte)(uVar1 >> 0x14) & 1;
  if ((param_7 == extraout_DL) || (cVar2 = '\x01', (uVar1 >> 0x14 & 1) == 0)) {
    cVar2 = extraout_DL;
  }
  *(char *)((int)this + 0x224) = cVar2;
  return this;
}

