/*
 * FUN_1004b980 at 1004b980
 * undefined4 __thiscall FUN_1004b980(void * this, uint param_1, int param_2, undefined4 * param_3, uint param_4, byte param_5)
 * Address ranges: 1004b980-1004bb46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1004b980(void *this,uint param_1,int param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *this_00;
  
  if ((param_5 & 1) != 0) {
    LOCK();
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 2) {
      *(int *)(param_1 + 0x34) = 3;
      iVar2 = 2;
    }
    UNLOCK();
    if (iVar2 == 2) {
      iVar2 = *(int *)((int)this + 0xf6b8);
      this_00 = (int *)(iVar2 + 0x11c0);
      FUN_100ce620(this_00);
      if (*(char *)(iVar2 + 0x12ec) == '\0') {
LAB_1004ba2c:
        puVar1 = *(undefined4 **)(iVar2 + 0x12d0);
        *puVar1 = this;
        puVar1[1] = param_1;
        FUN_1004bb47(puVar1);
      }
      else {
        puVar1 = (undefined4 *)FUN_100ce540(this_00,8);
        if (puVar1 == (undefined4 *)0x0) {
          FUN_1003971e(this_00);
          goto LAB_1004ba2c;
        }
        LOCK();
        *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
        UNLOCK();
        puVar1[1] = 8;
        puVar1[2] = this;
        puVar1[3] = param_1;
        puVar3 = (undefined4 *)((int)puVar1 + 0x13U & 0xfffffffc);
        *puVar3 = 0;
        *puVar1 = FUN_1004bb47;
        this_00[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
        if (*(char *)(iVar2 + 0x12ed) != '\0') {
          *this_00 = 0;
          SetEvent(*(HANDLE *)(iVar2 + 0x1220));
          goto LAB_1004ba44;
        }
      }
      *this_00 = 0;
    }
  }
LAB_1004ba44:
  if (((*(int *)(param_1 + 0x34) == 3) && (*(void **)(param_1 + 0x28) != (void *)0x0)) &&
     (iVar2 = FUN_100c29f0(*(void **)(param_1 + 0x28),*(int **)(param_1 + 0x2c),
                           *(int *)(param_1 + 0x30)), iVar2 == 1)) {
    FUN_1004d2dc((void *)((int)this + 0xf768),param_1);
  }
  if ((param_2 == 8) || (param_2 == 9)) {
    if ((param_4 != 0) && (param_4 < 4)) {
      return 0x80004005;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
LAB_1004bb38:
      *(undefined1 *)(param_1 + 0x3c) = 1;
      return 1;
    }
  }
  else {
    if (param_2 == 10) {
      if ((param_4 != 0) && (param_4 < 8)) {
        return 0x80004005;
      }
      if (*(int *)(param_1 + 0x34) != 0) goto LAB_1004bb38;
      if (param_4 == 0) {
        return 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      param_3[1] = *(undefined4 *)(param_1 + 0x1c);
      goto LAB_1004bb34;
    }
    if (param_2 != 0xb) {
      if (param_2 != 0xc) {
        return 0x80004005;
      }
      if ((param_4 != 0) && (param_4 < 8)) {
        return 0x80004005;
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        return 1;
      }
      if (param_4 == 0) {
        return 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      *param_3 = *(undefined4 *)(param_1 + 0x18);
      param_3[1] = uVar4;
      return 0;
    }
    if ((param_4 != 0) && (param_4 < 4)) {
      return 0x80004005;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      return 1;
    }
  }
  if (param_4 == 0) {
    return 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x18);
LAB_1004bb34:
  *param_3 = uVar4;
  return 0;
}

