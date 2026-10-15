/*
 * FUN_1002464f at 1002464f
 * undefined __fastcall FUN_1002464f(int param_1, int param_2, short param_3)
 * Address ranges: 1002464f-10024825
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002464f(int param_1,int param_2,short param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  char cVar11;
  ushort extraout_DX;
  uint *puVar12;
  longlong lVar13;
  
  uVar5 = *(ushort *)(param_2 + 0x100);
  cVar11 = (char)param_3;
  puVar7 = (ushort *)(((cVar11 != '\0') - 1 & 0xffffffc8) + 0xe8 + param_2);
  puVar12 = (uint *)(((cVar11 != '\0') - 1 & 0xffffffd0) + 0xf0 + param_1);
  uVar8 = -(uint)(puVar12[9] != 0) & 0x100;
  uVar4 = FUN_10024437(*(uint *)(param_1 + 0xf0),1,uVar5,0,0,cVar11,1);
  uVar5 = FUN_10024437(*(uint *)(param_1 + 0xf4),1,uVar5,0,0,cVar11,2);
  puVar7[5] = (ushort)uVar8 | param_3 << 0xc | 0xf0;
  puVar9 = (ushort *)(((cVar11 != '\0') - 1 & 0xffffffc8) + 0x100 + param_2);
  uVar6 = FUN_10024437(*puVar12,puVar12[4],*puVar9,0,0,cVar11,1);
  puVar7[1] = uVar6;
  if ((cVar11 == '\0') && (*(int *)(param_1 + 0xa0) != 0)) {
    cVar2 = FUN_10023e61();
    if (cVar2 == '\0') {
      if ((extraout_DX & 0xff0) == 0x100) {
        uVar6 = 0x2050;
      }
      else {
        uVar6 = extraout_DX | 0x4000;
      }
    }
    else {
      uVar6 = 0x2040;
    }
  }
  else {
    uVar6 = FUN_10024437(puVar12[1],puVar12[5],*puVar9,0,0,cVar11,2);
  }
  puVar7[2] = uVar6;
  uVar6 = FUN_10024437(puVar12[2],puVar12[6],*puVar9,uVar5,uVar4,cVar11,3);
  *puVar7 = uVar6;
  uVar5 = FUN_10024437(puVar12[3],puVar12[7],*puVar9,uVar5,uVar4,cVar11,4);
  puVar7[3] = uVar5;
  lVar13 = FUN_10056570();
  uVar10 = (uint)lVar13;
  if (uVar10 == 0) {
    uVar3 = 0xff;
  }
  else {
    iVar1 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    uVar3 = (undefined1)iVar1;
  }
  *(undefined1 *)(puVar7 + 4) = uVar3;
  uVar5 = FUN_10024437(*puVar12,1,*puVar9,0,0,cVar11,1);
  puVar7[6] = uVar5;
  FUN_10024826(puVar7,uVar8,param_3 << 0xc);
  return;
}

