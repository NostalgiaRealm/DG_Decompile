/*
 * FUN_10047dd2 at 10047dd2
 * undefined __thiscall FUN_10047dd2(void * this, int param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10047dd2-10047f22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10047dd2(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int *this_00;
  
  iVar16 = *(int *)((int)this + 0xf6b8);
  this_00 = (int *)(iVar16 + 0x11c0);
  iVar1 = *param_4;
  iVar2 = param_4[1];
  iVar3 = param_4[2];
  iVar4 = param_3[9];
  iVar5 = param_3[10];
  iVar6 = param_3[0xb];
  iVar7 = param_3[6];
  iVar8 = param_3[7];
  iVar9 = param_3[8];
  iVar10 = param_3[3];
  iVar11 = param_3[4];
  iVar12 = param_3[5];
  iVar13 = *param_3;
  iVar14 = param_3[1];
  iVar15 = param_3[2];
  FUN_100ce620(this_00);
  if (*(char *)(iVar16 + 0x12ec) != '\0') {
    puVar17 = (undefined4 *)FUN_100ce540(this_00,0x48);
    if (puVar17 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar16 + 0x12e8) = *(int *)(iVar16 + 0x12e8) + 1;
      UNLOCK();
      puVar17[1] = 0x48;
      puVar17[2] = this;
      puVar17[3] = param_1;
      puVar17[4] = param_2;
      puVar17[5] = iVar13;
      puVar17[6] = iVar14;
      puVar17[7] = iVar15;
      puVar17[8] = iVar10;
      puVar17[9] = iVar11;
      puVar17[10] = iVar12;
      puVar17[0xb] = iVar7;
      puVar17[0xc] = iVar8;
      puVar17[0xd] = iVar9;
      puVar17[0xe] = iVar4;
      puVar17[0xf] = iVar5;
      puVar17[0x10] = iVar6;
      puVar18 = (undefined4 *)((int)puVar17 + 0x53U & 0xfffffffc);
      puVar17[0x11] = iVar1;
      puVar17[0x12] = iVar2;
      puVar17[0x13] = iVar3;
      *puVar18 = 0;
      *puVar17 = FUN_10047f23;
      this_00[*(int *)(iVar16 + 0x12e4) * 5 + 0x1a] = (int)puVar18;
      if (*(char *)(iVar16 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar16 + 0x1220));
        return;
      }
      goto LAB_10047f16;
    }
    FUN_1003971e(this_00);
  }
  puVar17 = *(undefined4 **)(iVar16 + 0x12d0);
  *puVar17 = this;
  puVar17[1] = param_1;
  puVar17[2] = param_2;
  puVar17[3] = iVar13;
  puVar17[4] = iVar14;
  puVar17[5] = iVar15;
  puVar17[6] = iVar10;
  puVar17[7] = iVar11;
  puVar17[8] = iVar12;
  puVar17[9] = iVar7;
  puVar17[10] = iVar8;
  puVar17[0xb] = iVar9;
  puVar17[0xc] = iVar4;
  puVar17[0xd] = iVar5;
  puVar17[0xe] = iVar6;
  puVar17[0xf] = iVar1;
  puVar17[0x10] = iVar2;
  puVar17[0x11] = iVar3;
  FUN_10047f23(puVar17);
LAB_10047f16:
  *this_00 = 0;
  return;
}

