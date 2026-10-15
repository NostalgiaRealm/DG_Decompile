/*
 * FUN_1000f68a at 1000f68a
 * undefined __thiscall FUN_1000f68a(void * this, int param_1, uint * param_2)
 * Address ranges: 1000f68a-1000f9b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f68a(void *this,int param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uStack_5c;
  undefined4 uStack_58;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38 [6];
  uint local_20 [7];
  
  *(undefined4 *)(*(int *)((int)this + 4) + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x22) = *(undefined1 *)(param_1 + 0x22);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xae) = *(undefined4 *)(param_1 + 0xae);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb2) = *(undefined4 *)(param_1 + 0xb2);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb6) = *(undefined4 *)(param_1 + 0xb6);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xba) = *(undefined4 *)(param_1 + 0xba);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xc6) = *(undefined4 *)(param_1 + 0xc6);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xda) = *(undefined4 *)(param_1 + 0xda);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xde) = *(undefined4 *)(param_1 + 0xde);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x55) = *(undefined1 *)(param_1 + 0x55);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x56) = *(undefined1 *)(param_1 + 0x56);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x57) = *(undefined1 *)(param_1 + 0x57);
  if (param_2 == (uint *)0x0) {
    puVar2 = FUN_1000f4e5(this,local_20,param_1);
    puVar5 = local_50;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_1000f5dc(this,param_1,local_50);
    if ((char)uVar3 == '\0') {
      iVar4 = *(int *)((int)this + 4);
      if (*(int *)(iVar4 + 0x3f) == *(int *)(param_1 + 0x3f)) {
        if (*(char *)(iVar4 + 0x54) != *(char *)(param_1 + 0x54)) {
          *(char *)(iVar4 + 0x54) = *(char *)(param_1 + 0x54);
          (**(code **)(**(int **)((int)this + 0x365c) + 0x1c))();
        }
      }
      else {
        *(int *)(iVar4 + 0x3f) = *(int *)(param_1 + 0x3f);
        (**(code **)(**(int **)((int)this + 0x365c) + 0x18))();
      }
      goto LAB_1000f801;
    }
  }
  else {
    puVar2 = local_38;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = local_38;
    puVar5 = local_50;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)((int)this + 0xa0) = local_50[0];
  *(uint *)((int)this + 0xa4) = local_50[1];
  *(uint *)((int)this + 0xa8) = local_50[2];
  *(uint *)((int)this + 0xac) = local_50[3];
  *(undefined4 *)((int)this + 0xb4) = local_40;
  *(undefined4 *)((int)this + 0xb8) = local_3c;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x37) = *(undefined4 *)(param_1 + 0x37);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x3b) = *(undefined4 *)(param_1 + 0x3b);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x43) = *(undefined4 *)(param_1 + 0x43);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x47) = *(undefined4 *)(param_1 + 0x47);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x3f) = *(undefined4 *)(param_1 + 0x3f);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xc2) = *(undefined4 *)(param_1 + 0xc2);
  FUN_1000f643(this);
LAB_1000f801:
  *(undefined1 *)(*(int *)((int)this + 4) + 0x50) = *(undefined1 *)(param_1 + 0x50);
  (**(code **)(*(int *)this + 0x30))((int)this + 0x1310);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x4b) = *(undefined4 *)(param_1 + 0x4b);
  uVar6 = 0;
  *(undefined1 *)(*(int *)((int)this + 4) + 0x4f) = *(undefined1 *)(param_1 + 0x4f);
  do {
    iVar4 = uVar6 * 0x9d;
    (**(code **)(*(int *)this + 0x14c))
              (uVar6,*(undefined1 *)((int)this + iVar4 + 500),
               *(undefined1 *)((int)this + iVar4 + 0x1f5));
    (**(code **)(*(int *)this + 0x160))
              (uVar6,*(undefined1 *)((int)this + iVar4 + 0x24a),
               *(undefined4 *)((int)this + iVar4 + 0x24b));
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x52) = *(undefined1 *)(param_1 + 0x52);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x53) = *(undefined1 *)(param_1 + 0x53);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x9e) = *(undefined4 *)(param_1 + 0x9e);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xca) = *(undefined4 *)(param_1 + 0xca);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xc2) = *(undefined4 *)(param_1 + 0xc2);
  *(undefined1 *)(*(int *)((int)this + 4) + 0xe6) = *(undefined1 *)(param_1 + 0xe6);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xeb) = *(undefined4 *)(param_1 + 0xeb);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xe7) = *(undefined4 *)(param_1 + 0xe7);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xef) = *(undefined4 *)(param_1 + 0xef);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)(*(int *)((int)this + 4) + 8) = *(undefined4 *)(param_1 + 8);
  uStack_5c = *(uint *)((int)this + 0xa0);
  uStack_58 = *(undefined4 *)((int)this + 0xa4);
  FUN_1001144e(*(void **)((int)this + 0x365c),&uStack_5c);
  bVar1 = FUN_100111e4(*(int *)((int)this + 0x365c));
  if (*(byte *)(*(int *)((int)this + 4) + 0x20) != (bVar1 ^ 1)) {
    (**(code **)(*(int *)this + 0x2c))();
  }
  return;
}

