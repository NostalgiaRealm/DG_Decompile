/*
 * FUN_1002450d at 1002450d
 * undefined __fastcall FUN_1002450d(int param_1, uint param_2, int param_3, short param_4)
 * Address ranges: 1002450d-1002464e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002450d(int param_1,uint param_2,int param_3,short param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  ushort *puVar10;
  longlong lVar11;
  
  iVar8 = param_2 * 0xe + param_3;
  cVar7 = (char)param_4;
  puVar10 = (ushort *)(((cVar7 != '\0') - 1 & 0xffffffc8) + 0xf6 + iVar8);
  if (param_2 < 2) {
    uVar4 = *(ushort *)(((cVar7 != '\0') - 1 & 0xffffffc8) + 0x10e + iVar8);
  }
  else {
    uVar4 = 0;
  }
  puVar9 = (uint *)(((cVar7 != '\0') - 1 & 0xffffffd0) + param_2 * 0x250 + 0x150 + param_1);
  uVar5 = -(uint)(puVar9[9] != 0) & 0x100;
  uVar1 = (ushort)param_2;
  puVar10[5] = uVar1 + 1 | (ushort)uVar5 | param_4 << 0xc | 0xf0;
  uVar3 = FUN_100242cc(*puVar9,puVar9[4],uVar1,uVar4,cVar7,1);
  puVar10[1] = uVar3;
  uVar3 = FUN_100242cc(puVar9[1],puVar9[5],uVar1,uVar4,cVar7,2);
  puVar10[2] = uVar3;
  uVar3 = FUN_100242cc(puVar9[2],puVar9[6],uVar1,uVar4,cVar7,3);
  *puVar10 = uVar3;
  uVar3 = FUN_100242cc(puVar9[3],puVar9[7],uVar1,uVar4,cVar7,4);
  puVar10[3] = uVar3;
  lVar11 = FUN_10056570();
  uVar6 = (uint)lVar11;
  if (uVar6 == 0) {
    uVar2 = 0xff;
  }
  else {
    iVar8 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
      }
    }
    uVar2 = (undefined1)iVar8;
  }
  *(undefined1 *)(puVar10 + 4) = uVar2;
  uVar4 = FUN_100242cc(*puVar9,1,uVar1,uVar4,cVar7,1);
  puVar10[6] = uVar4;
  FUN_10024826(puVar10,uVar5,param_4 << 0xc);
  return;
}

