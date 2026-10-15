/*
 * FUN_1003f89d at 1003f89d
 * undefined __thiscall FUN_1003f89d(void * this, uint param_1)
 * Address ranges: 1003f89d-1003fa04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f89d(void *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = (uint *)FUN_10042906((void *)((int)this + 0x17c8),&param_1);
  uVar7 = param_1;
  if (puVar2 != (uint *)0x0) {
    uVar7 = *puVar2;
    uVar3 = FUN_10027520((void *)((int)this + 0x17b8),uVar7,0);
    uVar1 = param_1;
    uVar6 = *(uint *)((int)this + 0x17c0);
    if (((uVar3 != uVar6) && (*(uint *)(*(int *)((int)this + 0x17bc) + uVar3 * 0x10) == uVar7)) &&
       (*(int *)(*(int *)((int)this + 0x17bc) + 4 + uVar3 * 0x10) == 0)) {
      uVar3 = uVar3 + 1;
      if (uVar3 < uVar6) {
        do {
          puVar5 = (undefined4 *)(uVar3 * 0x10 + *(int *)((int)this + 0x17bc));
          uVar3 = uVar3 + 1;
          puVar5[-4] = *puVar5;
          puVar5[-3] = puVar5[1];
          puVar5[-2] = puVar5[2];
          puVar5[-1] = puVar5[3];
          uVar6 = *(uint *)((int)this + 0x17c0);
        } while (uVar3 < uVar6);
      }
      *(uint *)((int)this + 0x17c0) = uVar6 - 1;
    }
    uVar4 = (int)param_1 >> 0x1f;
    uVar3 = FUN_10027520((void *)((int)this + 0x17c8),param_1,uVar4);
    uVar6 = *(uint *)((int)this + 0x17d0);
    uVar7 = uVar1;
    if (((uVar3 != uVar6) &&
        (uVar7 = param_1, *(uint *)(*(int *)((int)this + 0x17cc) + uVar3 * 0x10) == uVar1)) &&
       (*(uint *)(*(int *)((int)this + 0x17cc) + 4 + uVar3 * 0x10) == uVar4)) {
      uVar3 = uVar3 + 1;
      if (uVar3 < uVar6) {
        do {
          puVar5 = (undefined4 *)(uVar3 * 0x10 + *(int *)((int)this + 0x17cc));
          uVar3 = uVar3 + 1;
          puVar5[-4] = *puVar5;
          puVar5[-3] = puVar5[1];
          puVar5[-2] = puVar5[2];
          puVar5[-1] = puVar5[3];
          uVar6 = *(uint *)((int)this + 0x17d0);
        } while (uVar3 < uVar6);
      }
      *(uint *)((int)this + 0x17d0) = uVar6 - 1;
    }
  }
  uVar6 = 0;
  do {
    if (*(uint *)((int)this + uVar6 * 4 + 0x14d4) == uVar7) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x74))(uVar6,0,0,0,0,0,0);
      *(undefined4 *)((int)this + uVar6 * 4 + 0x14d4) = 0;
      *(undefined4 *)((int)this + uVar6 * 4 + 0x14f4) = 0;
      *(undefined1 *)((int)this + uVar6 + 0x8f4) = 0;
      *(uint *)((int)this + 0x934) = *(uint *)((int)this + 0x934) | 1 << (uVar6 & 0x1f);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  return;
}

