import static org.junit.Assert.*;

import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;


public class test {
		@Before
	    public void setUp() throws Exception {
	    }
	    @org.junit.Test
	    public void testCompound() {
	        CompoundCalculator Compound = new CompoundCalculator();
	        double F = Compound.Compound(100,5,3,1);
	        Assert.assertEquals(F, 115.76, 1.0);
	    //    assertTrue(F>0);
	        double f =Compound.Compound(-100,5,3,1);
	        assertFalse(f>0);
	        double a=Compound.Compound(0,5,3,1);
	        assertFalse(a>0);
	    }
	    @org.junit.Test
	    public void testSimple() {
	    	CompoundCalculator Simple = new CompoundCalculator();
	        double F = Simple.Simple(1000,2,5);
	        Assert.assertEquals(F, 1100, 0.0);
	   //     assertTrue(F>0);
	        double f =Simple.Simple(-1000,2,5);
	        assertFalse(f>0);
	        double a=Simple.Simple(0,2,5);
	        assertFalse(a>0);
	    }
	    @org.junit.Test
	    public void testPrinciple() {
	    	CompoundCalculator Principle = new CompoundCalculator();
	        double F = Principle.Principle(1000,2,5,1);
	        Assert.assertEquals(F, 905.73, 1.0);
	   //     assertTrue(F>0);
	        double f =Principle.Principle(-1000,2,5,1);
	        assertFalse(f>0);
	        double a=Principle.Principle(0,2,5,1);
	        assertFalse(a>0);
	    }
	    @org.junit.Test
	    public void testYear() {
	    	CompoundCalculator Year = new CompoundCalculator();
	        double F = Year.Year(1000,2,1,2000);
	        Assert.assertEquals(F, 35, 0.0);
	    //    assertTrue(F>0);
	        double f =Year.Year(-1000,-2,1,2000);
	        assertFalse(f>0);
	        double a=Year.Year(0,2,1,2000);
	        assertFalse(a<0);
	    }
	    @org.junit.Test
	    public void testRate() {
	    	CompoundCalculator Rate = new CompoundCalculator();
	        double F = Rate.Rate(1000,5,1,2000);
	        Assert.assertEquals(F, 14.86, 1.0);
	    //    assertTrue(F>0);
	        double f =Rate.Rate(-1000,-5,1,2000);
	        assertFalse(f>0);
	        double a=Rate.Rate(0,0,1,2000);
	        assertFalse(a<0);
	    }
	    @org.junit.Test
	    public void testYearinvest() {
	    	CompoundCalculator Yearinvest = new CompoundCalculator();
	        double F = Yearinvest.Yearinvest(1000,2,5);
	        Assert.assertEquals(F, 5308.12, 1.0);
	    //    assertTrue(F>0);
	        double f =Yearinvest.Yearinvest(-1000,2,5);
	        assertFalse(f>0);
	        double a=Yearinvest.Yearinvest(0,2,5);
	        assertFalse(a>0);
	    }
	    @org.junit.Test
	    public void testMonthinvest() {
	    	CompoundCalculator Monthinvest = new CompoundCalculator();
	        double F = Monthinvest.Monthinvest(1000,2,6);
	        Assert.assertEquals(F, 6035.09, 1.0);
	     //   assertTrue(F>0);
	        double f =Monthinvest.Monthinvest(-1000,2,6);
	        assertFalse(f>0);
	        double a=Monthinvest.Monthinvest(0,2,6);
	        assertFalse(a>0);
	    }
	    @org.junit.Test
	    public void testRepayment() {
	    	CompoundCalculator Repayment = new CompoundCalculator();
	        double F = Repayment.Repayment(10000,2,5,2);
	        Assert.assertEquals(F, 175.16, 1.0);
	       // assertTrue(F>0);
	        double f =Repayment.Repayment(-10000,2,5,2);
	        assertFalse(f>0);
	        double a=Repayment.Repayment(0,2,5,2);
	        assertFalse(a>0);
	    }
	    
}

