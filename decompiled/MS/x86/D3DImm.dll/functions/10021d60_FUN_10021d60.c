/*
 * FUN_10021d60 at 10021d60
 * undefined __thiscall FUN_10021d60(void * this, uint param_1, undefined4 param_2, int * param_3, int * param_4)
 * Address ranges: 10021d60-10022393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021d60(void *this,uint param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int unaff_ESI;
  int unaff_EDI;
  uint uVar11;
  bool bVar12;
  int local_44;
  byte *local_3c;
  uint uStack_38;
  int local_34;
  int *local_30;
  uint local_2c;
  int *local_28;
  int *piStack_24;
  undefined1 uStack_20;
  char cStack_1f;
  undefined4 uStack_1e;
  undefined1 uStack_1a;
  int *local_18 [5];
  
  FUN_100218e0(this,0,0,0);
  if ((*param_3 == 0) && (*param_4 == 0)) {
    uVar11 = 0;
    do {
      piVar10 = *(int **)((int)this + uVar11 * 4 + 0x1f6c);
      if (piVar10 != (int *)0x0) {
        cVar6 = (char)piVar10[0xb] * (char)*(undefined4 *)((int)this + uVar11 * 4 + 0x1f90) +
                (char)*(undefined4 *)((int)this + uVar11 * 4 + 0x1f80);
        uVar8 = (**(code **)(*piVar10 + 0x84))();
        FUN_1001d340(this,uVar8,cVar6);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
    piVar10 = *(int **)((int)this + 0x1f7c);
    if (piVar10 != (int *)0x0) {
      cVar6 = (char)piVar10[0xb] * (char)*(undefined4 *)((int)this + 0x1fa4) +
              (char)*(undefined4 *)((int)this + 0x1fa0);
      uVar11 = (**(code **)(*piVar10 + 0x84))();
      FUN_1001d520(this,uVar11,cVar6);
      cVar6 = (**(code **)(**(int **)((int)this + 0x1f7c) + 0x44))();
      if (cVar6 != '\0') {
        piVar10 = *(int **)((int)this + 0x1f7c);
        cVar6 = ((char)piVar10[9] + (char)*(undefined4 *)((int)this + 0x1fa4)) * (char)piVar10[0xb]
                + (char)*(undefined4 *)((int)this + 0x1fa0);
        uVar11 = (**(code **)(*piVar10 + 0x84))();
        FUN_1001d520(this,uVar11,cVar6);
      }
    }
    *(undefined4 *)((int)this + 0x1f78) = 0;
    *(undefined4 *)((int)this + 0x1f74) = 0;
    *(undefined4 *)((int)this + 0x1f70) = 0;
    *(undefined4 *)((int)this + 0x1f6c) = 0;
    uVar2 = *(undefined4 *)((int)this + 0x1dec);
    *(undefined4 *)((int)this + 0x1f60) = uVar2;
    *(undefined4 *)((int)this + 0x1f5c) = uVar2;
    *(undefined4 *)((int)this + 0x1f58) = uVar2;
    *(undefined4 *)((int)this + 0x1f54) = uVar2;
    *(undefined4 *)((int)this + 0x1e40) = 0;
    *(undefined4 *)((int)this + 0x1e3c) = 0;
    *(undefined4 *)((int)this + 0x1e38) = 0;
    *(undefined4 *)((int)this + 0x1e34) = 0;
    *(undefined4 *)((int)this + 0x1f7c) = 0;
    *(undefined4 *)((int)this + 0x1f64) = uVar2;
    *(undefined4 *)((int)this + 0x1e54) = 0;
    *(undefined4 *)((int)this + 0x1838) = 0;
    *(undefined4 *)((int)this + 0x183c) = 0;
    *(undefined1 *)((int)this + 0x1908) = 1;
    *(undefined1 *)((int)this + 0x21cd) = 0;
    *(undefined1 *)((int)this + 0x1d3a) = 1;
    return;
  }
  uVar11 = 0;
  local_18[0] = (int *)0x0;
  local_18[1] = (int *)0x0;
  local_18[2] = (int *)0x0;
  local_18[3] = (int *)0x0;
  if (param_1 != 0) {
    do {
      piVar10 = (int *)(param_3[uVar11 * 3] + -0xc0);
      if (param_3[uVar11 * 3] == 0) {
        piVar10 = (int *)0x0;
      }
      local_18[uVar11] = piVar10;
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_1);
  }
  local_28 = (int *)(*param_4 + -0xc0);
  if (*param_4 == 0) {
    local_28 = (int *)0x0;
  }
  local_2c = 0;
  if (param_1 != 0) {
    local_44 = (int)this + 0x1f90;
    local_3c = (byte *)((int)this + 0x21cd);
    do {
      uVar11 = local_2c;
      local_30 = (int *)((int)this + 0x1e34);
      local_34 = (int)this + 0x1f54;
      piVar10 = *(int **)((int)this + local_2c * 4 + 0x1f6c);
      if (piVar10 != (int *)0x0) {
        cVar6 = (char)piVar10[0xb] * (char)*(undefined4 *)(local_44 + local_2c * 4) +
                (char)*(undefined4 *)((int)this + local_2c * 4 + 0x1f80);
        uVar8 = (**(code **)(*piVar10 + 0x84))();
        FUN_1001d340(this,uVar8,cVar6);
        local_3c = (byte *)((int)this + 0x21cd);
      }
      local_30 = (int *)((int)this + 0x1e34);
      local_34 = (int)this + 0x1f54;
      if (local_18[uVar11] == (int *)0x0) {
        *(undefined4 *)(local_44 + uVar11 * 4) = 0;
        *(undefined4 *)((int)this + uVar11 * 4 + 0x1f6c) = 0;
        local_30[uVar11] = 0;
        *(undefined4 *)((int)this + uVar11 * 4 + 0x1f80) = 0;
        *(undefined4 *)(local_34 + uVar11 * 4) = *(undefined4 *)((int)this + 0x1dec);
        bVar7 = *local_3c & ~(byte)(1 << (uVar11 & 0x1f));
      }
      else {
        piVar10 = local_18[uVar11];
        piStack_24 = param_3 + uVar11 * 3;
        iVar3 = piVar10[0xb];
        iVar4 = piStack_24[2];
        iVar5 = piStack_24[1];
        *(int **)((int)this + uVar11 * 4 + 0x1f6c) = piVar10;
        uVar8 = (**(code **)(*piVar10 + 0x94))(iVar3 * iVar4 + iVar5);
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x15dc);
        piVar10 = *(int **)(*(int *)(iVar3 + 0x34) + (uVar8 >> 0x10) * 8);
        (**(code **)(*piVar10 + 0x24))(piVar10,&local_3c);
        uVar11 = uStack_38;
        local_44 = local_44 + (uVar8 & 0xffff) * *(int *)(iVar3 + 0x18);
        *(int *)((int)this + uStack_38 * 4 + 0x1f80) = local_44;
        *(int *)(local_3c + uStack_38 * 4) = (&piStack_24)[uStack_38][0x1f];
        *(int *)(unaff_ESI + uStack_38 * 4) = local_30[1];
        *(int *)(unaff_EDI + uStack_38 * 4) = local_30[2];
        cVar6 = (char)(&piStack_24)[uStack_38][0xb] * (char)local_30[2] + (char)local_30[1];
        local_30 = (int *)(**(code **)(*(&piStack_24)[uStack_38] + 0x84))();
        local_2c = (int)local_30 >> 0x1f;
        piStack_24 = local_30;
        uVar8 = FUN_10023740((void *)((int)this + 0x1ec0),(uint)local_30,local_2c);
        if ((((uVar8 == *(uint *)((int)this + 0x1ec8)) ||
             (iVar3 = *(int *)((int)this + 0x1ec4), *(int **)(iVar3 + uVar8 * 0x18) != piStack_24))
            || (*(uint *)(iVar3 + 4 + uVar8 * 0x18) != local_2c)) ||
           (iVar3 = iVar3 + 0xc + uVar8 * 0x18, iVar3 == 0)) {
          uStack_20 = 0;
          uStack_1e = 0;
          cStack_1f = cVar6 + '\x01';
          uStack_1a = 1;
          FUN_100235a0((void *)((int)this + 0x1ec0),(uint *)&local_30,(uint *)&uStack_20);
        }
        else {
          uVar8 = 0;
          do {
            if (*(char *)(iVar3 + 1 + uVar8) == '\0') {
              *(char *)(iVar3 + uVar8 + 1) = cVar6 + '\x01';
              *(undefined1 *)(iVar3 + 6) = 1;
              goto LAB_10022120;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 4);
          *(undefined1 *)(iVar3 + 6) = 1;
        }
LAB_10022120:
        bVar7 = *(byte *)((int)this + 0x21cd) | (byte)(1 << (uVar11 & 0x1f));
        *(undefined1 *)((int)this + 0x21d3) = 1;
      }
      *local_3c = bVar7;
      local_2c = uVar11 + 1;
    } while (local_2c < param_1);
  }
  piVar10 = local_28;
  if (*(int **)((int)this + 0x1f6c) == (int *)0x0) {
    bVar12 = false;
  }
  else {
    cVar6 = (**(code **)(**(int **)((int)this + 0x1f6c) + 0x40))();
    bVar12 = cVar6 != '\0';
  }
  cVar6 = *(char *)((int)this + 0x1900);
  *(bool *)((int)this + 0x1900) = bVar12;
  *(byte *)((int)this + 0x1d3c) = *(byte *)((int)this + 0x1d3c) | bVar12 != (bool)cVar6;
  if (piVar10 == (int *)0x0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (**(code **)(*piVar10 + 0x44))();
  }
  cVar1 = *(char *)((int)this + 0x1842);
  *(char *)((int)this + 0x1842) = cVar6;
  piVar9 = *(int **)((int)this + 0x1f7c);
  *(byte *)((int)this + 0x1d3b) = *(byte *)((int)this + 0x1d3b) | cVar6 != cVar1;
  if (piVar9 != (int *)0x0) {
    cVar6 = (char)piVar9[0xb] * (char)*(undefined4 *)((int)this + 0x1fa4) +
            (char)*(undefined4 *)((int)this + 0x1fa0);
    uVar11 = (**(code **)(*piVar9 + 0x84))();
    FUN_1001d520(this,uVar11,cVar6);
    cVar6 = (**(code **)(**(int **)((int)this + 0x1f7c) + 0x44))();
    if (cVar6 != '\0') {
      piVar9 = *(int **)((int)this + 0x1f7c);
      cVar6 = ((char)piVar9[9] + (char)*(undefined4 *)((int)this + 0x1fa4)) * (char)piVar9[0xb] +
              (char)*(undefined4 *)((int)this + 0x1fa0);
      uVar11 = (**(code **)(*piVar9 + 0x84))();
      FUN_1001d520(this,uVar11,cVar6);
    }
  }
  if (piVar10 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x1f64) = *(undefined4 *)((int)this + 0x1dec);
    *(undefined4 *)((int)this + 0x1e54) = 0;
    *(byte *)((int)this + 0x1d3b) =
         *(byte *)((int)this + 0x1d3b) | *(int *)((int)this + 0x1f7c) != 0;
    piVar9 = (int *)0x0;
  }
  else {
    cVar6 = (char)piVar10[0xb] * (char)param_4[2] + (char)param_4[1];
    uVar11 = (**(code **)(*piVar10 + 0x84))();
    FUN_1001d470(this,uVar11,cVar6);
    cVar6 = (**(code **)(*piVar10 + 0x44))();
    if (cVar6 != '\0') {
      cVar6 = ((char)piVar10[9] + (char)param_4[2]) * (char)piVar10[0xb] + (char)param_4[1];
      uVar11 = (**(code **)(*piVar10 + 0x84))();
      FUN_1001d470(this,uVar11,cVar6);
    }
    uVar11 = (**(code **)(*piVar10 + 0x98))(piVar10[0xb] * param_4[2] + param_4[1]);
    iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x15e0);
    piVar10 = *(int **)(*(int *)(iVar3 + 0x34) + (uVar11 >> 0x10) * 8);
    (**(code **)(*piVar10 + 0x24))(piVar10,&local_28);
    *(int **)((int)this + 0x1f64) =
         (int *)((int)piStack_24 + (uVar11 & 0xffff) * *(int *)(iVar3 + 0x18));
    *(int *)((int)this + 0x1e54) = local_28[0x1f];
    *(int *)((int)this + 0x1fa0) = param_4[1];
    *(int *)((int)this + 0x1fa4) = param_4[2];
    *(byte *)((int)this + 0x1d3b) =
         *(byte *)((int)this + 0x1d3b) | *(int *)((int)this + 0x1f7c) == 0;
    *(undefined1 *)((int)this + 0x21d3) = 1;
    piVar9 = local_28;
    piVar10 = local_28;
  }
  *(int **)((int)this + 0x1f7c) = piVar9;
  if (local_18[0] != (int *)0x0) {
    piVar10 = local_18[0];
  }
  FUN_1002c5b0(this,piVar10);
  FUN_1002c740(this,piVar10);
  *(undefined1 *)((int)this + 0x1d3a) = 1;
  return;
}

