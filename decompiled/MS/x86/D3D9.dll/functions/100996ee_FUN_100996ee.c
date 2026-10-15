/*
 * FUN_100996ee at 100996ee
 * int __stdcall FUN_100996ee(int param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 100996ee-100998fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_100996ee(int param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  SIZE_T SVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  char local_1281;
  uint local_1280;
  uint local_127c;
  int local_1278 [1179];
  undefined4 uStack_c;
  
  uStack_c = 0x100996fe;
  iVar10 = -0x7789f794;
  if (param_2 == (uint *)0x0) {
    return -0x7789f794;
  }
  if (param_3 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  FUN_10003e40(&local_1281,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar1 = *param_2;
  if ((((uVar1 != 0xffff0100) && (uVar1 != 0xffff0101)) && (uVar1 != 0xffff0102)) &&
     (((uVar1 != 0xffff0103 && (uVar1 != 0xffff0104)) &&
      ((uVar1 != 0xffff0200 && ((uVar1 != 0xffff0201 && (uVar1 != 0xffff0300))))))))
  goto LAB_100998eb;
  local_1280 = 0;
  iVar10 = *(int *)(param_1 + 0x50);
  uVar2 = *(uint *)(iVar10 + 0xcc);
  pbVar8 = (byte *)(iVar10 + 0x108);
  if (uVar2 < uVar1) {
    pbVar8 = (byte *)0x0;
    uVar9 = 0x7fffffff;
  }
  else {
    uVar9 = *(uint *)(iVar10 + 300);
  }
  uVar4 = uVar1 >> 8 & 0xff;
  if (uVar4 == 1) {
    bVar3 = FUN_10015bc2((int *)param_2,local_1278,(int *)&local_1280);
LAB_10099800:
    if (((bVar3 != 0) && (uVar1 <= uVar2)) &&
       (puVar5 = (undefined4 *)FUN_100cfd55(0x20), puVar5 != (undefined4 *)0x0)) {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = puVar5;
      *puVar5 = &PTR_FUN_100d7028;
      puVar5[4] = param_1 + -0x66b4;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      local_127c = FUN_1009bb3f((void *)(param_1 + 0x9c),(uint)puVar5,(byte *)param_2,local_1280,
                                local_1278);
      uVar1 = local_1280;
      if (local_127c == 0) {
LAB_100998cf:
        iVar10 = -0x7789f794;
      }
      else {
        SVar6 = (SIZE_T)((ulonglong)local_1280 * 4);
        if ((int)((ulonglong)local_1280 * 4 >> 0x20) != 0) {
          SVar6 = 0xffffffff;
        }
        puVar7 = (undefined4 *)FUN_100cfd89(SVar6);
        if (puVar7 == (undefined4 *)0x0) goto LAB_100998cf;
        puVar5[5] = local_127c;
        puVar5[7] = puVar7;
        FUN_100cff00(puVar7,param_2,uVar1 << 2);
        puVar5[6] = uVar1;
        iVar10 = FUN_1009c9fe((int)puVar5,0x100d13c0,param_3);
        if (-1 < iVar10) goto LAB_100998eb;
        thunk_FUN_100cfd6c((LPVOID)puVar5[7]);
        puVar5[7] = 0;
        puVar5[6] = 0;
      }
      *puVar5 = &PTR_FUN_100d7028;
      FUN_100cfd6c(puVar5);
      goto LAB_100998eb;
    }
  }
  else {
    if (uVar4 == 2) {
      bVar3 = FUN_1009f443(param_2,pbVar8,local_1278,(int *)&local_1280);
      goto LAB_10099800;
    }
    if (uVar4 == 3) {
      bVar3 = FUN_100a0643((int *)param_2,uVar9,local_1278,(int *)&local_1280);
      goto LAB_10099800;
    }
  }
  iVar10 = -0x7789f794;
LAB_100998eb:
  FUN_10003e89(&local_1281);
  return iVar10;
}

