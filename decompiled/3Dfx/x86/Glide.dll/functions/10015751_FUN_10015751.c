/*
 * FUN_10015751 at 10015751
 * undefined4 * __thiscall FUN_10015751(void * this, undefined4 param_1)
 * Address ranges: 10015751-1001593f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10015751(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_1001d5be(this,param_1,(int)this + 0x3440,(int)this + 0x3950,(int)this + 0x39e0,
               (int)this + 0x6a04,(int)this + 0x9a28);
  *(undefined4 *)((int)this + 0x3184) = param_1;
  *(undefined ***)this = &PTR_LAB_100535d4;
  *(undefined ***)((int)this + 0x2958) = &PTR_FUN_100537c4;
  *(undefined4 *)((int)this + 0x3180) = 0;
  *(undefined4 *)((int)this + 0x3188) = 0;
  *(undefined4 *)((int)this + 0x318c) = 0;
  *(undefined4 *)((int)this + 0x3190) = 0;
  *(undefined4 *)((int)this + 0x3194) = 0;
  *(undefined4 *)((int)this + 0x3198) = 0;
  *(undefined4 *)((int)this + 0x319c) = 0;
  *(undefined4 *)((int)this + 0x31a0) = 0;
  *(undefined4 *)((int)this + 0x31a4) = 0;
  *(undefined4 *)((int)this + 0x31a8) = 0;
  *(undefined4 *)((int)this + 0x31ac) = 0;
  *(undefined4 *)((int)this + 0x31b0) = 0;
  *(undefined4 *)((int)this + 0x31b4) = 0;
  *(undefined4 *)((int)this + 0x31b8) = 0xffffffff;
  FUN_1001b5c3((undefined4 *)((int)this + 0x3440),this);
  *(undefined4 *)((int)this + 0x3440) = &PTR_grCheckForRoom_10053d04;
  *(void **)((int)this + 0x3578) = this;
  iVar3 = 3;
  puVar4 = (undefined4 *)((int)this + 0x3604);
  do {
    puVar5 = puVar4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + 0x48;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x3948) = 0;
  *(undefined4 *)((int)this + 0x394c) = 0;
  FUN_10050561((int *)((int)this + 0x38e0),0,0x5c);
  *(undefined4 *)((int)this + 0x393c) = 0;
  *(undefined4 *)((int)this + 0x3940) = 0;
  *(undefined4 *)((int)this + 0x3944) = 0;
  puVar4 = (undefined4 *)((int)this + 0x3950);
  FUN_1002ca3d(puVar4,this);
  *puVar4 = &PTR_FUN_10053d70;
  *(void **)((int)this + 0x398c) = this;
  *(undefined4 *)((int)this + 0x39b0) = 0;
  *(undefined1 *)((int)this + 0x39b4) = 0;
  *(undefined4 *)((int)this + 0x39b8) = 0;
  *(undefined4 *)((int)this + 0x39bc) = 0;
  *(undefined4 *)((int)this + 0x39c0) = 0;
  uVar1 = FUN_1004f9d3(0xc000);
  *(undefined4 *)((int)this + 0x39c4) = uVar1;
  *(undefined4 *)((int)this + 0x39c8) = 0x400;
  *(undefined4 *)((int)this + 0x39cc) = 0;
  *(undefined4 **)((int)this + 0x39d0) = (undefined4 *)((int)this + 0x39c0);
  *(undefined4 *)((int)this + 0x39d4) = 0;
  *(undefined4 *)((int)this + 0x39d8) = 0;
  *(undefined4 *)((int)this + 0x39dc) = 0;
  *(undefined4 *)((int)this + 0x3958) = 0xffffffff;
  FUN_100272b7((int)puVar4);
  FUN_10026d7d((void *)((int)this + 0x39e0),this,(int)this + 0x2cd0,extraout_EDX);
  FUN_10026d7d((void *)((int)this + 0x6a04),this,(int)this + 0x2e50,1);
  FUN_10026d7d((void *)((int)this + 0x9a28),this,(int)this + 0x2fd0,2);
  *(void **)((int)this + 0xca50) = (void *)((int)this + 0x6a04);
  *(undefined4 *)((int)this + 0xca58) = 0;
  *(undefined4 *)((int)this + 0xca5c) = 0;
  *(undefined4 *)((int)this + 0xca60) = 0;
  *(undefined4 *)((int)this + 0xca64) = 0;
  *(void **)((int)this + 0xca54) = (void *)((int)this + 0x9a28);
  *(int *)((int)this + 0xca4c) = (int)this + 0x39e0;
  return this;
}

