/*
 * FUN_1800a8e80 at 1800a8e80
 * undefined8 __fastcall FUN_1800a8e80(longlong * param_1, uint * param_2)
 * Address ranges: 1800a8e80-1800a91c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800a8e80(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  LPVOID local_58;
  LPVOID pvStack_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_60 = 1;
  local_68 = 0x200;
  local_78 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
  puVar1 = param_2 + 4;
  local_70 = local_78;
  iVar4 = FUN_1800ee08c((longlong *)&local_78,*puVar1);
  local_40 = 1;
  local_58 = (LPVOID)0x0;
  pvStack_50 = (LPVOID)0x0;
  local_48 = 0x80;
  local_58 = (LPVOID)thunk_FUN_1800fbccc(0x80);
  pvStack_50 = local_58;
  FUN_1800a88d4((longlong *)&local_58,param_2);
  FUN_1800edbe0(puVar1,(longlong *)&local_58,0x3e,0);
  uVar7 = param_2[7];
  FUN_1800ee2d0(*puVar1,(longlong *)&local_78,
                ~-(uint)((uVar7 >> (*(byte *)((longlong)param_2 + 0x6b) & 0x1f) & 1) == 0 &&
                        ((uVar7 >> (*(byte *)((longlong)param_2 + 0x6a) & 0x1f) & 1) == 0 &&
                        ((uVar7 >> (*(byte *)((longlong)param_2 + 0x69) & 0x1f) & 1) == 0 &&
                        (uVar7 >> ((byte)param_2[0x1a] & 0x1f) & 1) == 0))) & 0x4000);
  if ((param_2[6] & 1) != 0) {
    FUN_1800ee354(*puVar1,(longlong *)&local_78);
  }
  uVar8 = 0;
LAB_1800a8f82:
  do {
    bVar2 = *(byte *)((longlong)param_2 + uVar8 + 0x7f);
    if (bVar2 != 0) {
      if ((int)uVar8 == 0) {
        FUN_1800ee464((longlong *)&local_78,0,bVar2,2);
        uVar8 = 1;
        goto LAB_1800a8f82;
      }
      FUN_1800ee42c((longlong *)&local_78,uVar8,bVar2,2);
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if (1 < uVar7) {
      lVar9 = 0;
      do {
        bVar2 = *(byte *)((longlong)param_2 + lVar9 + 0x81);
        if (bVar2 != 0) {
          FUN_1800eddec((longlong *)&local_78,3,0x3000065,(ulonglong)((uint)bVar2 << 4 | 0x102002));
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 6);
      uVar7 = 0;
      do {
        if (((param_2[9] | param_2[8]) >> (uVar7 & 0x1f) & 1) != 0) {
          uVar6 = FUN_1800ee040(*puVar1);
          iVar5 = (int)uVar6;
          if (((iVar5 == 0x40) || (iVar5 == 0x41)) || (iVar5 == 0x50)) {
            FUN_1800eddec((longlong *)&local_78,3,0x300005a,0x106000);
          }
          else if (iVar5 == 0x51) {
            FUN_1800eddec((longlong *)&local_78,6,0x600005a,0x306000);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 2);
      if ((param_2[7] >> (*(byte *)((longlong)param_2 + 0x6d) & 0x1f) & 1) != 0) {
        FUN_1800ed324((int *)puVar1,(longlong *)&local_78);
      }
      if ((param_2[7] >> (*(byte *)((longlong)param_2 + 0x6e) & 0x1f) & 1) != 0) {
        FUN_1800ed324((int *)puVar1,(longlong *)&local_78);
      }
      if ((param_2[7] >> ((byte)param_2[0x1a] & 0x1f) & 1) != 0) {
        FUN_1800ed3c8((int *)puVar1,(longlong *)&local_78);
      }
      if ((param_2[7] >> (*(byte *)((longlong)param_2 + 0x69) & 0x1f) & 1) != 0) {
        FUN_1800ed3c8((int *)puVar1,(longlong *)&local_78);
      }
      if ((param_2[7] >> (*(byte *)((longlong)param_2 + 0x6a) & 0x1f) & 1) != 0) {
        FUN_1800ed3c8((int *)puVar1,(longlong *)&local_78);
      }
      if ((param_2[7] >> (*(byte *)((longlong)param_2 + 0x6b) & 0x1f) & 1) != 0) {
        FUN_1800ed3c8((int *)puVar1,(longlong *)&local_78);
      }
      if (*(byte *)((longlong)param_2 + 0x49) != 0) {
        FUN_1800eddec((longlong *)&local_78,2,0x2000068,
                      (ulonglong)*(byte *)((longlong)param_2 + 0x49));
      }
      FUN_1800ee0e8((longlong *)&local_78,(longlong *)&local_58,iVar4);
      puVar3 = local_78;
      FUN_1800edd90(param_1,local_78,(longlong)local_70 - (longlong)local_78);
      FUN_1800fbcf0(local_58);
      uVar6 = FUN_1800fbcf0(puVar3);
      return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
  } while( true );
}

