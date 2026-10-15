/*
 * FUN_1001e640 at 1001e640
 * undefined __thiscall FUN_1001e640(void * this, uint param_1, byte param_2)
 * Address ranges: 1001e640-1001e7fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001e640(void *this,uint param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  byte bStack0000000b;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  bVar3 = *(byte *)((int)this + 0x21d4) | *(byte *)((int)this + 0x1d39) | param_2;
  iVar2 = *(int *)((int)this + 0x2170);
  *(byte *)((int)this + 0x21d4) = bVar3;
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x2198);
  }
  if (*(char *)((int)this + 0x1905) == '\0') {
    uVar4 = *(int *)((int)this + 0x21c0) + iVar2;
  }
  else {
    uVar4 = (uint)(*(int *)((int)this + 0x1f68) != 0);
  }
  iVar5 = uVar4 + (param_1 & 0xff);
  bStack0000000b = 1;
  iVar2 = 0;
  if (bVar3 != 0) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
    bStack0000000b =
         FUN_10054e48(*(void **)((int)this + 0x1d64),iVar2,
                      *(uint *)(*(int *)(*(int *)((int)this + 0x1d54) + 0x1300) + 0xc),
                      *(uint *)(iVar1 + 0x938),*(uint *)(iVar1 + 0x93c),(int *)&local_1c);
    if (bStack0000000b == 0) goto LAB_1001e7e4;
    bVar6 = local_10 != *(int *)((int)this + 0x2014);
    *(int *)((int)this + 0x2014) = local_10;
    *(byte *)((int)this + 0x21d2) = *(byte *)((int)this + 0x21d2) | bVar6;
    *(byte *)((int)this + 0x21d5) = *(byte *)((int)this + 0x21d5) | bVar6;
    if (bStack0000000b == 0) goto LAB_1001e7e4;
  }
  if ((*(char *)((int)this + 0x21d4) != '\0') && (iVar5 != 0)) {
    if (*(char *)((int)this + 0x1905) == '\0') {
      if ((char)param_1 != '\0') {
        (**(code **)(*(int *)**(undefined4 **)((int)this + 0x1d58) + 0x60))
                  ((int *)**(undefined4 **)((int)this + 0x1d58),1,local_14,
                   *(undefined4 *)((int)this + 0x1ef0),0);
        *(uint *)((int)this + 0x1e90) = local_1c;
        bVar6 = CARRY4(local_1c,local_c);
        local_1c = local_1c + local_c;
        *(int *)((int)this + 0x1e94) = local_18;
        local_18 = local_18 + (uint)bVar6;
        local_14 = local_14 + local_c;
      }
      param_1 = *(uint *)((int)this + 0x21c0);
      if (param_1 != 0) {
        (**(code **)(*(int *)**(undefined4 **)((int)this + 0x1d58) + 0x5c))
                  ((int *)**(undefined4 **)((int)this + 0x1d58),1,&local_14,&param_1,param_1,
                   (int)this + 0x1f10,&DAT_1005ec50,0);
      }
    }
    else {
      if (*(int *)((int)this + 0x1f68) == 0) goto LAB_1001e7e4;
      (**(code **)(*(int *)**(undefined4 **)((int)this + 0x1d58) + 0x60))
                ((int *)**(undefined4 **)((int)this + 0x1d58),1,local_14,
                 *(undefined4 *)((int)this + 0x1f30),0);
    }
    *(int *)((int)this + 0x1e8c) = local_18;
    *(uint *)((int)this + 0x1e88) = local_1c;
  }
LAB_1001e7e4:
  *(byte *)((int)this + 0x1d39) = *(byte *)((int)this + 0x1d39) & (bStack0000000b ^ 1);
  return;
}

