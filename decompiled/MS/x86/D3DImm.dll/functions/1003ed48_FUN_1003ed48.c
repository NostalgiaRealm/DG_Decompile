/*
 * FUN_1003ed48 at 1003ed48
 * int __thiscall FUN_1003ed48(void * this, uint param_1)
 * Address ranges: 1003ed48-1003f217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003ed48(void *this,uint param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  ushort in_FPUControlWord;
  int local_58 [8];
  undefined1 local_38 [32];
  uint local_18;
  uint *local_14;
  uint local_10;
  undefined1 local_9 [5];
  
  local_14 = &local_18;
  local_10 = CONCAT22(local_10._2_2_,in_FPUControlWord);
  local_18 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_18 = (uint)in_FPUControlWord;
    local_10 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  if (*(char *)((int)this + 0x100) != '\0') {
    return -0x7789fffb;
  }
  cVar2 = (**(code **)(**(int **)((int)this + 0xa70) + 0x30))();
  uVar10 = param_1;
  if (cVar2 == '\0') {
LAB_1003edce:
    cVar2 = (**(code **)(**(int **)((int)this + 0xa70) + 0x30))();
    if (cVar2 != '\0') {
      return -0x7ff8ffa9;
    }
    iVar8 = 0;
    do {
      if (*(int *)(uVar10 + iVar8 * 4) != *(int *)(*(int *)((int)this + 0xa58) + 0x10 + iVar8 * 4))
      {
        return -0x7ff8ffa9;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
  }
  else {
    iVar8 = 0;
    do {
      if (*(int *)(param_1 + iVar8 * 4) != *(int *)(*(int *)((int)this + 0xa58) + iVar8 * 4))
      goto LAB_1003edce;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
  }
  iVar3 = (**(code **)(**(int **)((int)this + 0xa70) + 0x48))();
  local_14 = (uint *)iVar3;
  (**(code **)(**(int **)((int)this + 0xa70) + 0x44))();
  *(undefined4 *)((int)this + 0xa8c) = 0;
  iVar8 = 0;
  if (**(char **)(iVar3 + 0x16c) != -1) {
    iVar5 = 0;
    do {
      iVar8 = iVar5 + 1;
      *(int *)((int)this + 0xa8c) = iVar8;
      iVar1 = iVar5 + 1;
      iVar5 = iVar8;
    } while (*(char *)(iVar1 + *(int *)(iVar3 + 0x16c)) != -1);
  }
  param_1 = 0;
  if (iVar8 != 0) {
    do {
      uVar10 = param_1;
      iVar3 = param_1 * 0x6c;
      FUN_1005c9cc((int *)((int)this + iVar3 + 0xa90),0,0x6c);
      *(undefined4 *)((int)this + iVar3 + 0xa90) = 0x6c;
      *(undefined4 *)((int)this + iVar3 + 0xa94) = 0x1001;
      *(undefined4 *)((int)this + iVar3 + 0xaf8) = 0x1000;
      puVar4 = (undefined4 *)
               (**(code **)(**(int **)((int)this + 0xa70) + 0x4c))
                         (local_38,*(undefined1 *)(uVar10 + *(int *)((int)local_14 + 0x16c)));
      puVar11 = (undefined4 *)((int)this + iVar3 + 0xad8);
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)((int)this + 0xa8c));
  }
  iVar3 = -0x7fffbffb;
  iVar8 = FUN_1005c755(0x9c4);
  piVar9 = (int *)(iVar8 + 0x13U & 0xfffffff0);
  piVar9[-1] = iVar8;
  FUN_1005c9cc(piVar9,0,0x9b0);
  piVar9 = FUN_100083b8(piVar9);
  *(int **)((int)this + 0x9cc) = piVar9;
  if (piVar9 == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar8 = FUN_1005c789(0x4000);
  *(int *)((int)this + 0x1674) = iVar8;
  if (iVar8 == 0) goto LAB_1003f1ee;
  iVar8 = *(int *)(*(int *)((*(int **)((int)this + 0xa70))[3] + 0x94) + 8);
  iVar5 = (**(code **)(**(int **)((int)this + 0xa70) + 0x2c))();
  if (iVar5 == 0) {
    uVar6 = (**(code **)(**(int **)((int)this + 0xa70) + 0x28))();
    puVar4 = FUN_10018e40(uVar6,iVar8);
LAB_1003ef69:
    *(undefined4 **)((int)this + 0x14) = puVar4;
  }
  else if (iVar5 == 1) {
    uVar6 = (**(code **)(**(int **)((int)this + 0xa70) + 0x28))();
    puVar4 = FUN_10023280(uVar6,iVar8);
    goto LAB_1003ef69;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0x14) + 0xc) = 0;
    *(undefined1 *)((int)this + 0x9d8) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x14) + 4) = 0xffffffff;
    *(undefined4 *)((int)this + 0x9d0) = 0xffffffff;
    *(undefined4 *)(*(int *)((int)this + 0x14) + 8) = 0xff000000;
    *(undefined4 *)((int)this + 0x9d4) = 0xff000000;
    *(bool *)(*(int *)((int)this + 0x14) + 0xd) =
         *(char *)(*(int *)((int)this + 0xa58) + 0x21) == '\0';
    iVar8 = (**(code **)(**(int **)((int)this + 0xa70) + 0x44))();
    *(undefined1 *)(*(int *)((int)this + 0x14) + 0xe) = *(undefined1 *)(iVar8 + 0x95e);
    iVar8 = 0;
    do {
      if (*(int *)((int)this + iVar8 * 4 + 0xa60) != (&DAT_1005d1b0)[iVar8]) {
        *(undefined1 *)(*(int *)((int)this + 0x14) + 0xc) = 1;
        *(undefined1 *)((int)this + 0x9d8) = 1;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
    cVar2 = (**(code **)(**(int **)((int)this + 0x14) + 8))((int)&param_1 + 3);
    if (cVar2 != '\0') {
      puVar7 = (undefined1 *)(**(code **)(**(int **)((int)this + 0x14) + 0x10))(local_9);
      *(undefined1 *)((int)this + 0x10) = *puVar7;
      FUN_1005c9cc(*(int **)((int)this + 0x9cc),0,0x9b0);
      FUN_10013705(local_58);
      uVar10 = 0;
      do {
        FUN_10007a92(this,uVar10,local_58);
        uVar10 = uVar10 + 1;
      } while (uVar10 < 0xe);
      FUN_1000698f(this);
      FUN_10006a27(this);
      FUN_10006b74((int)this);
      FUN_10006ac9((int)this);
      FUN_1003db63(extraout_ECX);
      (**(code **)(**(int **)((int)this + 0x14) + 0x44))((int)this + 0x2c);
      (**(code **)(**(int **)((int)this + 0x14) + 0x34))(*(undefined4 *)((int)this + 0x210));
      (**(code **)(**(int **)((int)this + 0x14) + 0x38))(*(undefined1 *)((int)this + 0x226));
      (**(code **)(**(int **)((int)this + 0x14) + 0x90))(0);
      iVar8 = **(int **)((int)this + 0x14);
      iVar3 = (**(code **)(**(int **)((int)this + 0xa70) + 0x44))();
      (**(code **)(iVar8 + 0x3c))(*(undefined1 *)(iVar3 + 0x7e9));
      (**(code **)(**(int **)((int)this + 0x14) + 0x8c))
                (*(undefined1 *)(*(int *)((int)this + 0xa58) + 0x134));
      iVar8 = 0;
      do {
        if (*(int *)((int)this + iVar8 * 4 + 0xa60) != (&DAT_1005d180)[iVar8]) {
          iVar8 = 0;
          goto LAB_1003f100;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 4);
      goto LAB_1003f112;
    }
    goto LAB_1003f1c9;
  }
  goto LAB_1003f1d8;
  while (iVar8 = iVar8 + 1, iVar8 != 4) {
LAB_1003f100:
    if (*(int *)((int)this + iVar8 * 4 + 0xa60) != (&DAT_1005d190)[iVar8]) goto LAB_1003f12f;
  }
LAB_1003f112:
  uVar10 = 2;
  if (*(int *)(*(int *)((int)this + 0xa58) + 0x30) == 1) {
    uVar10 = 7;
  }
  FUN_1003e51d(this,0x15,uVar10);
LAB_1003f12f:
  FUN_10006cc5((int)this);
  *(undefined2 *)((int)this + 0x1754) = 0x101;
  *(undefined1 *)((int)this + 0xa85) = 0;
  (**(code **)(**(int **)((int)this + 0x14) + 0x40))
            (*(undefined1 *)(*(int *)((int)this + 0xa58) + 0x20));
  iVar3 = 0;
  if (*(int *)((int)this + 0x18) == 0) {
LAB_1003f18c:
    if (-1 < iVar3) {
      uVar10 = -(uint)(this != (void *)0x0) & (int)this + 0x17d8U;
      piVar9 = (int *)(**(code **)(**(int **)((int)this + 0xa70) + 0x44))();
      FUN_100057de((void *)((int)this + 0x17dc),piVar9,uVar10);
      *(undefined1 *)((int)this + 0x100) = 1;
      return iVar3;
    }
  }
  else {
    iVar3 = FUN_1003dd24(this,*(int **)((int)this + 0x18),*(int **)((int)this + 0x28));
    if (-1 < iVar3) {
      uVar6 = FUN_10007c0b(this,*(int *)((int)this + 0x18),*(int **)((int)this + 0x28),
                           extraout_ECX_00,'\x01');
      iVar3 = -0x7fffbffb;
      if ((char)uVar6 != '\0') {
        iVar3 = 0;
      }
      goto LAB_1003f18c;
    }
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0xc))();
LAB_1003f1c9:
  (**(code **)(**(int **)((int)this + 0x14) + 4))();
  *(undefined4 *)((int)this + 0x14) = 0;
LAB_1003f1d8:
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1674));
  *(undefined4 *)((int)this + 0x1674) = 0;
LAB_1003f1ee:
  FUN_10005dd1((int)this);
  return iVar3;
}

