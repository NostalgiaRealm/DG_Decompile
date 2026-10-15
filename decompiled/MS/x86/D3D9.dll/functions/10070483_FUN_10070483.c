/*
 * FUN_10070483 at 10070483
 * undefined1 __stdcall FUN_10070483(void * param_1, int * param_2)
 * Address ranges: 10070483-10070620
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10070483(void *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  uint uVar6;
  char extraout_DL;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_84 [16];
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  int local_28;
  char local_1c;
  undefined3 uStack_1b;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  uVar8 = 0;
  local_5 = 1;
  local_3c = 0x4e475349;
  local_38 = 0;
  local_34 = 0;
  local_30 = 8;
  FUN_10036e19(&local_2c,0x210);
  FUN_100c3d16(&local_2c,&local_3c,0x10);
  FUN_100cfed0(local_84,0,0x40);
  iVar9 = 0;
  local_c = 0;
  do {
    if ((*(char *)(uVar8 + 0x10 + param_2[4]) != '\0') &&
       (bVar1 = *(byte *)(uVar8 + param_2[4]), bVar1 != 0xff)) {
      local_10 = *param_2;
      uVar10 = 0xffffffff;
      local_18 = bVar1 & 0xf;
      uVar6 = 0;
      local_14 = *(uint *)(local_10 + 8);
      iVar9 = local_10;
      if (local_14 != 0) {
        do {
          uVar7 = (uint)*(byte *)(iVar9 + 0x214 + uVar6);
          if (*(byte *)(local_10 + 0x19 + uVar7 * 8) == bVar1) {
            iVar9 = *param_2;
            uVar10 = uVar7;
            break;
          }
          iVar9 = *param_2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_14);
      }
      if (uVar10 == 0xffffffff) {
        *(undefined1 *)((int)param_2 + uVar8 + 0xda) = 0xff;
        *(undefined1 *)((int)param_2 + uVar8 + 0xca) = 0xff;
        iVar9 = local_c;
      }
      else {
        cVar2 = *(char *)(iVar9 + 0x1a + uVar10 * 8);
        _local_1c = CONCAT31(uStack_1b,cVar2);
        local_3c = 0;
        *(undefined1 *)((int)param_2 + uVar8 + 0xca) = *(undefined1 *)(*param_2 + 0x18 + uVar10 * 8)
        ;
        local_34 = uVar8 & 0xff;
        *(char *)((int)param_2 + uVar8 + 0xda) = cVar2;
        local_40 = local_18;
        uVar3 = FUN_100684fa(cVar2,&local_38);
        if ((extraout_DL == '\x05') || (extraout_DL == '\x06')) {
          uVar4 = 1;
        }
        else {
          uVar4 = *(undefined1 *)(uVar8 + 0x10 + param_2[4]);
        }
        local_30 = (uint)CONCAT11(uVar4,uVar3);
        pbVar5 = (byte *)FUN_100733bc(CONCAT31((int3)((uint)param_2[4] >> 8),
                                               *(undefined1 *)(uVar8 + param_2[4])));
        local_44 = FUN_100c3da7(local_84,pbVar5);
        local_5 = (char)local_30 != '\0';
        iVar9 = local_c + 1;
        local_c = iVar9;
        FUN_100c3d16(&local_2c,&local_44,0x18);
      }
    }
    uVar8 = uVar8 + 1;
    if (0xf < uVar8) {
      FUN_100c3ee5((int *)&local_2c,iVar9,local_84);
      FUN_100c3d16(param_1,local_2c,local_28 - (int)local_2c);
      thunk_FUN_100cfd6c(local_2c);
      return local_5;
    }
  } while( true );
}

