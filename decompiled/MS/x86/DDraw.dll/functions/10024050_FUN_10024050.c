/*
 * FUN_10024050 at 10024050
 * undefined4 __thiscall FUN_10024050(void * this, undefined4 * param_1)
 * Address ranges: 10024050-10024394
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_10024050(void *this,undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ushort in_FPUControlWord;
  int local_30 [8];
  undefined4 *local_10;
  undefined4 local_c;
  
  local_c = 0x80004005;
  if (*(char *)((int)this + 0x150) == '\0') {
    return 0x80004005;
  }
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  if (((param_1 != (undefined4 *)0x0) && (param_1 != (undefined4 *)0x2)) &&
     (param_1 != (undefined4 *)0x1)) {
    local_30[4] = *param_1;
    local_30[5] = param_1[1];
    local_30[6] = param_1[2];
    local_30[7] = param_1[3];
  }
  local_30[0] = 0;
  iVar4 = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  do {
    if (local_30[iVar4 + 4] != local_30[iVar4]) {
      local_c = 0x88760231;
      uVar6 = 0;
      goto LAB_100240f6;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  uVar5 = 0;
  uVar6 = 0xffffffff;
  do {
    uVar3 = uVar6;
    if (((&DAT_1006c408)[uVar5 * 0x8a] != 0) && ((&DAT_1006c498)[uVar5 * 0x228] != '\0')) {
      uVar3 = uVar5;
      if (uVar6 != 0xffffffff) {
        uVar3 = uVar6;
      }
      uVar7 = uVar5;
      if ((&DAT_1006c499)[uVar5 * 0x228] != '\0') break;
    }
    uVar5 = uVar5 + 1;
    uVar6 = uVar3;
    uVar7 = uVar3;
  } while (uVar5 < 0x20);
LAB_10024136:
  if (uVar7 != 0xffffffff) {
    *(bool *)((int)this + 0x14c) = param_1 == (undefined4 *)0x2;
    bVar8 = DAT_1006c210 != (int *)0x0;
    *(bool *)((int)this + 0x14d) = param_1 == (undefined4 *)0x1;
    if (bVar8) {
      LOCK();
      iVar4 = DAT_1006c200 + 1;
      UNLOCK();
      bVar8 = DAT_1006c200 == 0;
      DAT_1006c200 = iVar4;
      if (bVar8) {
        DAT_1006c208 = AddVectoredExceptionHandler(1,FUN_10002d45);
        DAT_1006c20c = AddVectoredContinueHandler(1,FUN_10002d45);
      }
      FUN_10003255();
      FUN_10029aaf();
      FUN_10004412((int)this + 0x10);
      piVar1 = DAT_1006c210;
      if (DAT_1006c210[0x1ef] == 0) {
        *(undefined1 *)((int)this + 0x14c) = 1;
      }
      *(uint *)((int)this + 0x11c) = uVar7;
      if (*(char *)((int)this + 0x14c) == '\0') {
        iVar4 = piVar1[0x1ef];
      }
      else {
        iVar4 = 0;
      }
      *(int *)((int)this + 0x40) = iVar4;
      local_c = 0x80004001;
      *(undefined4 *)((int)this + 0x120) = (&DAT_1006c2c4)[uVar7 * 0x8a];
      *(int *)((int)this + 0x18) = (&DAT_1006c2c4)[uVar7 * 0x8a] + 1;
      if ((*(char *)((int)this + 0x14c) == '\0') || (*(char *)((int)this + 0x14d) == '\0')) {
        local_10 = (undefined4 *)(in_FPUControlWord | 0x80000000);
        if ((in_FPUControlWord & 0xf3f) != 0x23f) {
          local_10 = (undefined4 *)(uint)in_FPUControlWord;
        }
        local_c = 0x80004005;
        cVar2 = FUN_10001d8d((void *)((int)this + 0x3c),*(int *)((int)this + 0x11c));
        if (cVar2 != '\0') {
          iVar4 = *(int *)((int)this + 0x11c);
          *(undefined4 *)((int)this + 0x118) = (&DAT_1006c2b0)[iVar4 * 0x8a];
          if ((*(int *)(&DAT_1006c4b4 + iVar4 * 0x228) != 0) || (bVar8 = FUN_100021f1(iVar4), bVar8)
             ) {
            piVar1 = DAT_1006c210;
            iVar4 = DAT_1006c210[0xc2];
            DAT_1006c210[0xc2] = iVar4 + 1;
            if (iVar4 == 0) {
              FUN_1005e109(piVar1);
            }
            if (DAT_1006c204 != 0) {
              FUN_1000199c(-(uint)(this != (void *)0x0) & (int)this + 0x38U);
            }
            (**(code **)(**(int **)((int)this + 0x118) + 0x88))
                      ((&DAT_1006b5fc)[*(int *)((int)this + 0x40) * 0x1a8]);
            iVar4 = (**(code **)(**(int **)((int)this + 0x118) + 0x1c))();
            *(bool *)((int)this + 0x35) = iVar4 == 1;
            *(undefined1 *)((int)this + 0x36) = 0;
            *(undefined1 *)((int)this + 0x14f) = 1;
            FUN_100012ee((void *)((int)this + 0x158),DAT_1006c210,
                         -(uint)(this != (void *)0x0) & (int)this + 0x154U);
            return 0;
          }
          FUN_10001f5d(*(int *)((int)this + 0x11c));
          *(undefined4 *)((int)this + 0x118) = 0;
        }
      }
      FUN_10004462();
    }
    FUN_10003225();
    FUN_100032b7();
    FUN_10029afd('\0');
  }
  return local_c;
LAB_100240f6:
  do {
    local_10 = &DAT_100698c0 + uVar6 * 0x29;
    iVar4 = 0;
    do {
      if (local_10[iVar4] != local_30[iVar4 + 4]) goto LAB_1002412c;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    uVar7 = uVar6;
    if ((&DAT_1006c498)[uVar6 * 0x228] != '\0') break;
LAB_1002412c:
    uVar6 = uVar6 + 1;
    uVar7 = 0xffffffff;
  } while (uVar6 < 0x20);
  goto LAB_10024136;
}

