/*
 * FUN_1002682d at 1002682d
 * undefined1 __thiscall FUN_1002682d(void * this, uint param_1, int param_2, undefined1 param_3, LONG param_4, LONG param_5, LONG param_6, LONG param_7, undefined4 param_8)
 * Address ranges: 1002682d-10026978
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1002682d(void *this,uint param_1,int param_2,undefined1 param_3,LONG param_4,LONG param_5,
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
    uVar2 = FUN_1001d191(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  uStack_8 = (void *)((uint)this & 0xffffff);
  FUN_100360e0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10026917:
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
    FUN_10026979(puVar3);
  }
  else {
    puVar3 = (undefined4 *)FUN_10036000(this_00,0x28);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10021ec0(this_00);
      goto LAB_10026917;
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
    *puVar3 = FUN_10026979;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_1002695e;
    }
  }
  *this_00 = 0;
LAB_1002695e:
  FUN_10036a10(*(int *)((int)this + 0x3188) + 0x11c0);
  return uStack_8._3_1_;
}

