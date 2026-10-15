/*
 * FUN_10008f8a at 10008f8a
 * undefined4 * __thiscall FUN_10008f8a(void * this, undefined4 param_1)
 * Address ranges: 10008f8a-1000911b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10008f8a(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_1000d655(this,param_1,(int)this + 0x35c0,(int)this + 0x3f50,(int)this + 0x42d0,
               (int)this + 0x72f4,(int)this + 0xa318);
  *(undefined4 *)((int)this + 0x3304) = param_1;
  *(undefined ***)this = &PTR_FUN_10055664;
  *(undefined ***)((int)this + 0x29d4) = &PTR_FUN_10055848;
  *(undefined4 *)((int)this + 0x3300) = 0;
  *(undefined4 *)((int)this + 0x3308) = 0;
  *(undefined4 *)((int)this + 0x330c) = 0;
  *(undefined4 *)((int)this + 0x3310) = 0;
  *(undefined4 *)((int)this + 0x3314) = 0;
  *(undefined4 *)((int)this + 0x3318) = 0;
  *(undefined4 *)((int)this + 0x331c) = 0;
  *(undefined4 *)((int)this + 0x3320) = 0;
  *(undefined4 *)((int)this + 0x3324) = 0;
  *(undefined4 *)((int)this + 0x3328) = 0;
  *(undefined4 *)((int)this + 0x332c) = 0;
  *(undefined4 *)((int)this + 0x3330) = 0;
  *(undefined4 *)((int)this + 0x3334) = 0;
  *(undefined4 *)((int)this + 0x3338) = 0xffffffff;
  FUN_1000f3ac((undefined4 *)((int)this + 0x35c0),this);
  *(undefined4 *)((int)this + 0x35c0) = &PTR_grErrorSetCallback_10055e18;
  *(void **)((int)this + 0x36f8) = this;
  iVar2 = 7;
  puVar3 = (undefined4 *)((int)this + 0x3784);
  do {
    puVar4 = puVar3;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 0x48;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x3f48) = 0;
  *(undefined4 *)((int)this + 0x3f4c) = 0;
  FUN_10052de1((int *)((int)this + 0x3ee0),0,0x5c);
  *(undefined4 *)((int)this + 0x3f3c) = 0;
  *(undefined4 *)((int)this + 0x3f40) = 0;
  *(undefined4 *)((int)this + 0x3f44) = 0;
  FUN_1001a5dd((void *)((int)this + 0x3f50),(int)this);
  FUN_1001a03c((void *)((int)this + 0x42d0),this,(int)this + 0x2d70,0);
  FUN_1001a03c((void *)((int)this + 0x72f4),this,(int)this + 0x2f10,1);
  FUN_1001a03c((void *)((int)this + 0xa318),this,(int)this + 0x30b0,2);
  *(void **)((int)this + 0xd340) = (void *)((int)this + 0x72f4);
  *(undefined4 *)((int)this + 0xd348) = 0;
  *(undefined4 *)((int)this + 0xd34c) = 0;
  *(undefined4 *)((int)this + 0xd350) = 0;
  *(undefined4 *)((int)this + 0xd354) = 0;
  *(void **)((int)this + 0xd344) = (void *)((int)this + 0xa318);
  *(int *)((int)this + 0xd33c) = (int)this + 0x42d0;
  return this;
}

