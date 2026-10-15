/*
 * FUN_100264a3 at 100264a3
 * undefined1 __thiscall FUN_100264a3(void * this, uint param_1, int param_2, undefined1 param_3, LONG param_4, LONG param_5, LONG param_6, LONG param_7, undefined4 param_8)
 * Address ranges: 100264a3-100265ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_100264a3(void *this,uint param_1,int param_2,undefined1 param_3,LONG param_4,LONG param_5,
            LONG param_6,LONG param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  undefined4 uStack_8;
  
  if (*(int *)(*(int *)((int)this + 0x3188) + 0x12e8) == 0) {
    uStack_8 = this;
    uVar2 = FUN_1001ce05(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  uStack_8 = (void *)((uint)this & 0xffffff);
  FUN_10035d50(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_1002658d:
    puVar3 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar3 = this;
    puVar3[1] = param_1;
    puVar3[2] = param_2;
    *(undefined1 *)(puVar3 + 3) = param_3;
    puVar3[4] = param_4;
    puVar3[5] = param_5;
    puVar3[6] = param_6;
    puVar3[7] = param_7;
    *(undefined1 *)(puVar3 + 8) = (undefined1)param_8;
    puVar3[9] = (int)&uStack_8 + 3;
    FUN_100265ef(puVar3);
  }
  else {
    puVar3 = (undefined4 *)FUN_10035c70(this_00,0x28);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10021b34(this_00);
      goto LAB_1002658d;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 0x28;
    puVar3[2] = this;
    puVar3[3] = param_1;
    puVar3[4] = param_2;
    *(undefined1 *)(puVar3 + 5) = param_3;
    puVar3[6] = param_4;
    puVar3[7] = param_5;
    puVar3[8] = param_6;
    puVar3[9] = param_7;
    *(undefined1 *)(puVar3 + 10) = (undefined1)param_8;
    puVar3[0xb] = (int)&uStack_8 + 3;
    puVar4 = (undefined4 *)((int)puVar3 + 0x33U & 0xfffffffc);
    *puVar4 = 0;
    *puVar3 = FUN_100265ef;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_100265d4;
    }
  }
  *this_00 = 0;
LAB_100265d4:
  FUN_10036680(*(int *)((int)this + 0x3188) + 0x11c0);
  return uStack_8._3_1_;
}

